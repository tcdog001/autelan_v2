/*
 * Copyright (c) 2009-2012, 2014-2015
 *	Todd C. Miller <Todd.Miller@courtesan.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <config.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#ifdef HAVE_SYS_STROPTS_H
#include <sys/stropts.h>
#endif /* HAVE_SYS_STROPTS_H */
#include <stdio.h>
#ifdef STDC_HEADERS
# include <stdlib.h>
# include <stddef.h>
#else
# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif
#endif /* STDC_HEADERS */
#ifdef HAVE_STRING_H
# include <string.h>
#endif /* HAVE_STRING_H */
#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif /* HAVE_STRINGS_H */
#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif /* HAVE_UNISTD_H */
#include <errno.h>
#include <fcntl.h>
#include <grp.h>
#include <pwd.h>

#if defined(HAVE_LIBUTIL_H)
# include <libutil.h>
#elif defined(HAVE_UTIL_H)
# include <util.h>
#endif
#ifdef HAVE_PTY_H
# include <pty.h>
#endif

#include "sudo.h"

#if defined(HAVE_OPENPTY)
int
get_pty(int *master, int *slave, char *name, size_t namesz, uid_t ttyuid)
{
    struct group *gr;
    gid_t ttygid = -1;
    int rval = 0;
    debug_decl(get_pty, SUDO_DEBUG_PTY)

    if ((gr = getgrnam("tty")) != NULL)
	ttygid = gr->gr_gid;

    if (openpty(master, slave, name, NULL, NULL) == 0) {
	if (chown(name, ttyuid, ttygid) == 0)
	    rval = 1;
    }

    debug_return_bool(rval);
}

#elif defined(HAVE__GETPTY)
int
get_pty(int *master, int *slave, char *name, size_t namesz, uid_t ttyuid)
{
    char *line;
    int rval = 0;
    debug_decl(get_pty, SUDO_DEBUG_PTY)

    /* IRIX-style dynamic ptys (may fork) */
    line = _getpty(master, O_RDWR, S_IRUSR|S_IWUSR|S_IWGRP, 0);
    if (line != NULL) {
	*slave = open(line, O_RDWR|O_NOCTTY, 0);
	if (*slave != -1) {
	    (void) chown(line, ttyuid, -1);
	    strlcpy(name, line, namesz);
	    rval = 1;
	} else {
	    close(*master);
	    *master = -1;
	}
    }
    debug_return_bool(rval);
}
#elif defined(HAVE_GRANTPT)
# ifndef HAVE_POSIX_OPENPT
static int
posix_openpt(int oflag)
{
    int fd;

#  ifdef _AIX
    fd = open("/dev/ptc", oflag);
#  else
    fd = open("/dev/ptmx", oflag);
#  endif
    return fd;
}
# endif /* HAVE_POSIX_OPENPT */

int
get_pty(int *master, int *slave, char *name, size_t namesz, uid_t ttyuid)
{
    char *line;
    int rval = 0;
    debug_decl(get_pty, SUDO_DEBUG_PTY)

    *master = posix_openpt(O_RDWR|O_NOCTTY);
    if (*master != -1) {
	(void) grantpt(*master); /* may fork */
	if (unlockpt(*master) != 0) {
	    close(*master);
	    goto done;
	}
	line = ptsname(*master);
	if (line == NULL) {
	    close(*master);
	    goto done;
	}
	*slave = open(line, O_RDWR|O_NOCTTY, 0);
	if (*slave == -1) {
	    close(*master);
	    goto done;
	}
# if defined(I_PUSH) && !defined(_AIX)
	ioctl(*slave, I_PUSH, "ptem");	/* pseudo tty emulation module */
	ioctl(*slave, I_PUSH, "ldterm");	/* line discipline module */
# endif
	(void) chown(line, ttyuid, -1);
	strlcpy(name, line, namesz);
	rval = 1;
    }
done:
    debug_return_bool(rval);
}

#else /* Old-style BSD ptys */

static char line[] = "/dev/ptyXX";

int
get_pty(int *master, int *slave, char *name, size_t namesz, uid_t ttyuid)
{
    char *bank, *cp;
    struct group *gr;
    gid_t ttygid = -1;
    int rval = 0;
    debug_decl(get_pty, SUDO_DEBUG_PTY)

    if ((gr = getgrnam("tty")) != NULL)
	ttygid = gr->gr_gid;

    for (bank = "pqrs"; *bank != '\0'; bank++) {
	line[sizeof("/dev/ptyX") - 2] = *bank;
	for (cp = "0123456789abcdef"; *cp != '\0'; cp++) {
	    line[sizeof("/dev/ptyXX") - 2] = *cp;
	    *master = open(line, O_RDWR|O_NOCTTY, 0);
	    if (*master == -1) {
		if (errno == ENOENT)
		    goto done; /* out of ptys */
		continue; /* already in use */
	    }
	    line[sizeof("/dev/p") - 2] = 't';
	    (void) chown(line, ttyuid, ttygid);
	    (void) chmod(line, S_IRUSR|S_IWUSR|S_IWGRP);
# ifdef HAVE_REVOKE
	    (void) revoke(line);
# endif
	    *slave = open(line, O_RDWR|O_NOCTTY, 0);
	    if (*slave != -1) {
		    strlcpy(name, line, namesz);
		    rval = 1; /* success */
		    goto done;
	    }
	    (void) close(*master);
	}
    }
done:
    debug_return_bool(rval);
}
#endif /* HAVE_OPENPTY */
