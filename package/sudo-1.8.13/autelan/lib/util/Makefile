#
# Copyright (c) 2011-2015 Todd C. Miller <Todd.Miller@courtesan.com>
#
# Permission to use, copy, modify, and distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
# ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# lib/util/Makefile.  Generated from Makefile.in by configure.
#

#### Start of system configuration section. ####

srcdir = .
devdir = $(srcdir)
top_builddir = ../..
top_srcdir = ../..
incdir = $(top_srcdir)/include
cross_compiling = yes

# Where to install things...
prefix = /home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr
exec_prefix = $(prefix)
bindir = /home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr/bin
sbindir = /home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr/sbin
sysconfdir = /etc
libexecdir = /usr/lib
datarootdir = /home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../fakerelease/usr/share
localstatedir = /home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/var

# File extension, mode and map file to use for shared libraries/objects
shlib_enable = yes
shlib_mode = 0644
shlib_exp = ./util.exp
shlib_map = util.map
shlib_opt = util.opt

# Compiler & tools to use
CC = arm-hisiv200-linux-gcc -std=gnu99
LIBTOOL = $(SHELL) $(top_builddir)/libtool --tag=disable-static
SED = /bin/sed
AWK = gawk

# Our install program supports extra flags...
INSTALL = $(SHELL) $(top_srcdir)/install-sh -c
INSTALL_OWNER = -o $(install_uid) -g $(install_gid)

# C preprocessor flags
CPPFLAGS = -I$(incdir) -I$(top_builddir) -I$(srcdir) -I$(top_srcdir) -D__STDC_WANT_LIB_EXT1__=1

# Usually -O and/or -g
CFLAGS =  		-O2 		-I/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/include 		-I/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../fakerelease/usr/include -I/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../fakerelease/usr/local/include 		 -fvisibility=hidden

# Flags to pass to the link stage
LDFLAGS =  		-L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/lib -L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/lib 		-L/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/lib -L/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr/lib -L/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr/local/lib 		 -Wl,-z,relro
LT_LDFLAGS =   

# PIE flags
PIE_CFLAGS = 
PIE_LDFLAGS = 

# Stack smashing protection flags
SSP_CFLAGS = -fstack-protector-all
SSP_LDFLAGS = -Wc,-fstack-protector-all

# Libtool style shared library version
SHLIB_VERSION = 0:0:0

# cppcheck options, usually set in the top-level Makefile
CPPCHECK_OPTS = -q --force --enable=warning,performance,portability --suppress=constStatement --error-exitcode=1 --inline-suppr -Dva_copy=va_copy -U__cplusplus -UQUAD_MAX -UQUAD_MIN -UUQUAD_MAX -U_POSIX_HOST_NAME_MAX -U_POSIX_PATH_MAX -U__NBBY -DNSIG=64

# Regression tests
TEST_PROGS = atofoo_test conf_test hltq_test parseln_test progname_test fnm_test
TEST_LIBS =  
TEST_LDFLAGS =  		-L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/lib -L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/lib 		-L/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/lib -L/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr/lib -L/home/hisisdk/histb_v2/autelan/rootfs/sudo-1.8.13/../../release/usr/local/lib 		 -Wl,-z,relro

# User and group ids the installed files should be "owned" by
install_uid = 0
install_gid = 0

# OS dependent defines
DEFS =  -D_GNU_SOURCE -D_FORTIFY_SOURCE=2 -D_PATH_SUDO_CONF=\"$(sysconfdir)/sudo.conf\"

# Set to non-empty for development mode
DEVEL = 

#### End of system configuration section. ####

SHELL = /bin/sh

LTOBJS = alloc.lo event.lo fatal.lo key_val.lo gethostname.lo gettime.lo \
	 gidlist.lo lbuf.lo locking.lo parseln.lo progname.lo secure_path.lo \
	 setgroups.lo strtobool.lo strtoid.lo strtomode.lo sudo_conf.lo \
	 sudo_debug.lo sudo_dso.lo term.lo ttysize.lo  locale_weak.lo event_poll.lo  ${LIBOBJDIR}fnmatch$U.lo ${LIBOBJDIR}memset_s$U.lo ${LIBOBJDIR}pw_dup$U.lo ${LIBOBJDIR}strlcpy$U.lo ${LIBOBJDIR}strlcat$U.lo ${LIBOBJDIR}closefrom$U.lo ${LIBOBJDIR}snprintf$U.lo ${LIBOBJDIR}strtonum$U.lo ${LIBOBJDIR}sha2$U.lo ${LIBOBJDIR}sig2str$U.lo

ATOFOO_TEST_OBJS = atofoo_test.lo locale_stub.lo

MKTEMP_TEST_OBJS = mktemp_test.lo locale_stub.lo

PARSELN_TEST_OBJS = parseln_test.lo locale_stub.lo

PROGNAME_TEST_OBJS = progname_test.lo progname.lo

CONF_TEST_OBJS = conf_test.lo locale_stub.lo

HLTQ_TEST_OBJS = hltq_test.lo locale_stub.lo

FNM_TEST_OBJS = fnm_test.lo locale_stub.lo

GLOBTEST_OBJS = globtest.lo locale_stub.lo

all: libsudo_util.la

Makefile: $(srcdir)/Makefile.in
	(cd $(top_builddir) && ./config.status --file lib/util/Makefile)

.SUFFIXES: .c .h .lo

.c.lo:
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $<

$(shlib_map): $(shlib_exp)
	@$(AWK) 'BEGIN { print "{\n\tglobal:" } { print "\t\t"$$0";" } END { print "\tlocal:\n\t\t*;\n};" }' $(shlib_exp) > $@

$(shlib_opt): $(shlib_exp)
	@$(SED) 's/^/+e /' $(shlib_exp) > $@

libsudo_util.la: $(LTOBJS) 
	case "$(LT_LDFLAGS)" in \
	*-no-install*) \
	    $(LIBTOOL) --mode=link $(CC) -o $@ $(LDFLAGS) $(LT_LDFLAGS) $(LTOBJS) -ldl -lrt;; \
	*) \
	    $(LIBTOOL) --mode=link $(CC) -o $@ $(LDFLAGS) $(SSP_LDFLAGS) $(LT_LDFLAGS) $(LTOBJS) -version-info $(SHLIB_VERSION) -rpath $(libexecdir)/sudo  -ldl -lrt;; \
	esac

siglist.c: mksiglist
	./mksiglist > $@

signame.c: mksigname
	./mksigname > $@

mksiglist: $(srcdir)/mksiglist.c $(srcdir)/mksiglist.h $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(CC) $(CPPFLAGS) $(CFLAGS) $(DEFS) $(srcdir)/mksiglist.c -o $@

mksigname: $(srcdir)/mksigname.c $(srcdir)/mksigname.h $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(CC) $(CPPFLAGS) $(CFLAGS) $(DEFS) $(srcdir)/mksigname.c -o $@

$(srcdir)/mksiglist.h: $(srcdir)/siglist.in
	@if [ -n "$(DEVEL)" ]; then \
	    $(AWK) 'BEGIN {print "/* public domain */\n"} /^    [A-Z]/ {printf("#ifdef SIG%s\n    if (sudo_sys_siglist[SIG%s] == NULL)\n\tsudo_sys_siglist[SIG%s] = \"%s\";\n#endif\n", $$1, $$1, $$1, substr($$0, 13))}' < $(srcdir)/siglist.in > $@; \
	fi

$(srcdir)/mksigname.h: $(srcdir)/siglist.in
	@if [ -n "$(DEVEL)" ]; then \
	    $(AWK) 'BEGIN {print "/* public domain */\n"} /^    [A-Z]/ {printf("#ifdef SIG%s\n    if (sudo_sys_signame[SIG%s] == NULL)\n\tsudo_sys_signame[SIG%s] = \"%s\";\n#endif\n", $$1, $$1, $$1, $$1)}' < $(srcdir)/siglist.in > $@; \
	fi

atofoo_test: $(ATOFOO_TEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(ATOFOO_TEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

conf_test: $(CONF_TEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(CONF_TEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

fnm_test: $(FNM_TEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(FNM_TEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

globtest: $(GLOBTEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(GLOBTEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

hltq_test: $(HLTQ_TEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(HLTQ_TEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

mktemp_test: $(MKTEMP_TEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(MKTEMP_TEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

parseln_test: $(PARSELN_TEST_OBJS) libsudo_util.la
	$(LIBTOOL) --mode=link $(CC) -o $@ $(PARSELN_TEST_OBJS) libsudo_util.la $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

progname_test: $(PROGNAME_TEST_OBJS)
	$(LIBTOOL) --mode=link $(CC) -o $@ $(PROGNAME_TEST_OBJS) $(PIE_LDFLAGS) $(SSP_LDFLAGS) $(TEST_LDFLAGS) $(TEST_LIBS)

pre-install:

install: install-dirs
	case "$(LT_LDFLAGS)" in \
	*-no-install*) ;; \
	*)  if [ X"$(shlib_enable)" = X"yes" ]; then \
		INSTALL_BACKUP='~' $(LIBTOOL) --quiet --mode=install $(INSTALL) $(INSTALL_OWNER) libsudo_util.la $(DESTDIR)$(libexecdir)/sudo; \
	    fi;; \
	esac

install-dirs:
	$(SHELL) $(top_srcdir)/mkinstalldirs $(DESTDIR)$(libexecdir)/sudo

install-binaries:

install-includes:

install-doc:

install-plugin:

uninstall:
	$(LIBTOOL) --mode=uninstall rm -f $(DESTDIR)$(libexecdir)/sudo/libsudo_util.la

cppcheck:
	cppcheck $(CPPCHECK_OPTS) -I$(incdir) -I$(top_builddir) -I$(top_srcdir) $(srcdir)/*.c

# Note: some regress checks are run from srcdir for consistent error messages
check: $(TEST_PROGS)
	@if test X"$(cross_compiling)" != X"yes"; then \
	    rval=0; \
	    if test -f fnm_test; then \
		./fnm_test $(srcdir)/regress/fnmatch/fnm_test.in || rval=`expr $$rval + $$?`; \
	    fi; \
	    if test -f globtest; then \
		mkdir -p `$(SED) 's@/[^/]*$$@@' $(srcdir)/regress/glob/files | sort -u`; \
		touch `cat $(srcdir)/regress/glob/files`; \
		chmod 0755 `grep '/r[^/]*$$' $(srcdir)/regress/glob/files`; \
		chmod 0444 `grep '/s[^/]*$$' $(srcdir)/regress/glob/files`; \
		chmod 0711 `grep '/t[^/]*$$' $(srcdir)/regress/glob/files`; \
		./globtest $(srcdir)/regress/glob/globtest.in || rval=`expr $$rval + $$?`; \
		rm -rf fake; \
	    fi; \
	    if test -f mktemp_test; then \
		./mktemp_test || rval=`expr $$rval + $$?`; \
	    fi; \
	    ./atofoo_test || rval=`expr $$rval + $$?`; \
	    ./hltq_test || rval=`expr $$rval + $$?`; \
	    ./progname_test || rval=`expr $$rval + $$?`; \
	    rm -f ./progname_test2; ln -s ./progname_test ./progname_test2; \
	    ./progname_test2 || rval=`expr $$rval + $$?`; \
	    rm -f ./progname_test2; \
	    build_dir=`pwd`; \
	    cd $(srcdir); \
	    for dir in sudo_conf sudo_parseln; do \
		passed=0; failed=0; total=0; \
		mkdir -p $$build_dir/regress/$$dir; \
		for t in regress/$$dir/*.in; do \
		    base=`basename $$t .in`; \
		    out="$$build_dir/regress/$$dir/$${base}.out"; \
		    out_ok="regress/$$dir/$${base}.out.ok"; \
		    err="$$build_dir/regress/$$dir/$${base}.err"; \
		    err_ok="regress/$$dir/$${base}.err.ok"; \
		    if test "$$dir" = "sudo_conf"; then \
			$$build_dir/conf_test $$t >$$out 2>$$err; \
		    else \
			$$build_dir/parseln_test <$$t >$$out 2>$$err; \
		    fi; \
		    if cmp $$out $$out_ok >/dev/null; then \
			passed=`expr $$passed + 1`; \
			echo "$$dir/$$base: OK"; \
		    else \
			failed=`expr $$failed + 1`; \
			echo "$$dir/$$base: FAIL"; \
			diff $$out $$out_ok || true; \
		    fi; \
		    total=`expr $$total + 1`; \
		    if test -s $$err_ok; then \
			if cmp $$err $$err_ok >/dev/null; then \
			    passed=`expr $$passed + 1`; \
			    echo "$$dir/$$base (stderr): OK"; \
			else \
			    failed=`expr $$failed + 1`; \
			    echo "$$dir/$$base (stderr): FAIL"; \
			    diff $$err $$err_ok || true; \
			fi; \
			total=`expr $$total + 1`; \
		    elif test -s $$err; then \
			failed=`expr $$failed + 1`; \
			echo "$$dir/$$base (stderr): FAIL"; \
			cat $$err 1>&2; \
		    fi; \
		done; \
		if test $$failed -ne 0; then \
		    rval=`expr $$rval + $$failed`; \
		fi; \
		echo "$$dir: $$passed/$$total tests passed; $$failed/$$total tests failed"; \
	    done; \
	    exit $$rval; \
	fi

clean:
	-$(LIBTOOL) --mode=clean rm -f $(TEST_PROGS) *.lo *.o *.la *.a stamp-* core *.core core.* regress/*/*.out regress/*/*.err

mostlyclean: clean

distclean: clean
	-rm -rf Makefile .libs $(shlib_exp) $(shlib_map) $(shlib_opt)

clobber: distclean

realclean: distclean
	rm -f TAGS tags

cleandir: realclean

# Autogenerated dependencies, do not modify
aix.lo: $(srcdir)/aix.c $(incdir)/compat/stdbool.h $(incdir)/sudo_alloc.h \
        $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h $(incdir)/sudo_fatal.h \
        $(incdir)/sudo_gettext.h $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
        $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/aix.c
alloc.lo: $(srcdir)/alloc.c $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
          $(incdir)/sudo_fatal.h $(incdir)/sudo_gettext.h \
          $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/alloc.c
atofoo_test.lo: $(srcdir)/regress/atofoo/atofoo_test.c \
                $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
                $(incdir)/sudo_fatal.h $(incdir)/sudo_util.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/atofoo/atofoo_test.c
closefrom.lo: $(srcdir)/closefrom.c $(incdir)/sudo_compat.h \
              $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/closefrom.c
conf_test.lo: $(srcdir)/regress/sudo_conf/conf_test.c \
              $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
              $(incdir)/sudo_conf.h $(incdir)/sudo_debug.h \
              $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
              $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/sudo_conf/conf_test.c
event.lo: $(srcdir)/event.c $(incdir)/compat/stdbool.h $(incdir)/sudo_alloc.h \
          $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
          $(incdir)/sudo_event.h $(incdir)/sudo_fatal.h $(incdir)/sudo_queue.h \
          $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/event.c
event_poll.lo: $(srcdir)/event_poll.c $(incdir)/compat/stdbool.h \
               $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
               $(incdir)/sudo_debug.h $(incdir)/sudo_event.h \
               $(incdir)/sudo_fatal.h $(incdir)/sudo_queue.h \
               $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/event_poll.c
event_select.lo: $(srcdir)/event_select.c $(incdir)/compat/stdbool.h \
                 $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
                 $(incdir)/sudo_debug.h $(incdir)/sudo_event.h \
                 $(incdir)/sudo_fatal.h $(incdir)/sudo_queue.h \
                 $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/event_select.c
fatal.lo: $(srcdir)/fatal.c $(incdir)/compat/stdbool.h $(incdir)/sudo_alloc.h \
          $(incdir)/sudo_compat.h $(incdir)/sudo_fatal.h \
          $(incdir)/sudo_gettext.h $(incdir)/sudo_plugin.h \
          $(incdir)/sudo_queue.h $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/fatal.c
fnm_test.lo: $(srcdir)/regress/fnmatch/fnm_test.c $(incdir)/compat/fnmatch.h \
             $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/fnmatch/fnm_test.c
fnmatch.lo: $(srcdir)/fnmatch.c $(incdir)/compat/charclass.h \
            $(incdir)/compat/fnmatch.h $(incdir)/sudo_compat.h \
            $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/fnmatch.c
getaddrinfo.lo: $(srcdir)/getaddrinfo.c $(incdir)/compat/getaddrinfo.h \
                $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/getaddrinfo.c
getcwd.lo: $(srcdir)/getcwd.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/getcwd.c
getgrouplist.lo: $(srcdir)/getgrouplist.c $(incdir)/compat/nss_dbdefs.h \
                 $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
                 $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/getgrouplist.c
gethostname.lo: $(srcdir)/gethostname.c $(incdir)/compat/stdbool.h \
                $(incdir)/sudo_compat.h $(incdir)/sudo_util.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/gethostname.c
getline.lo: $(srcdir)/getline.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/getline.c
getopt_long.lo: $(srcdir)/getopt_long.c $(incdir)/compat/getopt.h \
                $(incdir)/sudo_compat.h $(incdir)/sudo_fatal.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/getopt_long.c
gettime.lo: $(srcdir)/gettime.c $(incdir)/compat/stdbool.h \
            $(incdir)/compat/timespec.h $(incdir)/sudo_compat.h \
            $(incdir)/sudo_debug.h $(incdir)/sudo_queue.h \
            $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/gettime.c
gidlist.lo: $(srcdir)/gidlist.c $(incdir)/compat/stdbool.h \
            $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
            $(incdir)/sudo_debug.h $(incdir)/sudo_fatal.h \
            $(incdir)/sudo_gettext.h $(incdir)/sudo_queue.h \
            $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/gidlist.c
glob.lo: $(srcdir)/glob.c $(incdir)/compat/charclass.h $(incdir)/compat/glob.h \
         $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/glob.c
globtest.lo: $(srcdir)/regress/glob/globtest.c $(incdir)/compat/glob.h \
             $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/glob/globtest.c
hltq_test.lo: $(srcdir)/regress/tailq/hltq_test.c $(incdir)/compat/stdbool.h \
              $(incdir)/sudo_compat.h $(incdir)/sudo_fatal.h \
              $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
              $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/tailq/hltq_test.c
inet_pton.lo: $(srcdir)/inet_pton.c $(incdir)/sudo_compat.h \
              $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/inet_pton.c
isblank.lo: $(srcdir)/isblank.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/isblank.c
key_val.lo: $(srcdir)/key_val.c $(incdir)/compat/stdbool.h \
            $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
            $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
            $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/key_val.c
lbuf.lo: $(srcdir)/lbuf.c $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
         $(incdir)/sudo_debug.h $(incdir)/sudo_lbuf.h $(incdir)/sudo_queue.h \
         $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/lbuf.c
locale_stub.lo: $(top_srcdir)/src/locale_stub.c $(incdir)/sudo_compat.h \
                $(incdir)/sudo_fatal.h $(incdir)/sudo_gettext.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(top_srcdir)/src/locale_stub.c
locale_weak.lo: $(srcdir)/locale_weak.c $(incdir)/sudo_compat.h \
                $(incdir)/sudo_fatal.h $(incdir)/sudo_gettext.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/locale_weak.c
locking.lo: $(srcdir)/locking.c $(incdir)/compat/stdbool.h \
            $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
            $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
            $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/locking.c
memrchr.lo: $(srcdir)/memrchr.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/memrchr.c
memset_s.lo: $(srcdir)/memset_s.c $(incdir)/sudo_compat.h \
             $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/memset_s.c
mksiglist.lo: $(srcdir)/mksiglist.c $(incdir)/sudo_compat.h \
              $(srcdir)/mksiglist.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/mksiglist.c
mksigname.lo: $(srcdir)/mksigname.c $(incdir)/sudo_compat.h \
              $(srcdir)/mksigname.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/mksigname.c
mktemp.lo: $(srcdir)/mktemp.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/mktemp.c
mktemp_test.lo: $(srcdir)/regress/mktemp/mktemp_test.c \
                $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
                $(incdir)/sudo_fatal.h $(incdir)/sudo_util.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/mktemp/mktemp_test.c
parseln.lo: $(srcdir)/parseln.c $(incdir)/compat/stdbool.h \
            $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
            $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
            $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/parseln.c
parseln_test.lo: $(srcdir)/regress/sudo_parseln/parseln_test.c \
                 $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
                 $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/sudo_parseln/parseln_test.c
progname.lo: $(srcdir)/progname.c $(incdir)/compat/stdbool.h \
             $(incdir)/sudo_compat.h $(incdir)/sudo_util.h \
             $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/progname.c
progname_test.lo: $(srcdir)/regress/progname/progname_test.c \
                  $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
                  $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/regress/progname/progname_test.c
pw_dup.lo: $(srcdir)/pw_dup.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/pw_dup.c
secure_path.lo: $(srcdir)/secure_path.c $(incdir)/compat/stdbool.h \
                $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
                $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
                $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/secure_path.c
setgroups.lo: $(srcdir)/setgroups.c $(incdir)/compat/stdbool.h \
              $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
              $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
              $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/setgroups.c
sha2.lo: $(srcdir)/sha2.c $(incdir)/compat/endian.h $(incdir)/compat/sha2.h \
         $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/sha2.c
sig2str.lo: $(srcdir)/sig2str.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/sig2str.c
siglist.lo: siglist.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) siglist.c
signame.lo: signame.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) signame.c
snprintf.lo: $(srcdir)/snprintf.c $(incdir)/sudo_compat.h \
             $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/snprintf.c
strlcat.lo: $(srcdir)/strlcat.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strlcat.c
strlcpy.lo: $(srcdir)/strlcpy.c $(incdir)/sudo_compat.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strlcpy.c
strsignal.lo: $(srcdir)/strsignal.c $(incdir)/sudo_compat.h \
              $(incdir)/sudo_gettext.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strsignal.c
strtobool.lo: $(srcdir)/strtobool.c $(incdir)/compat/stdbool.h \
              $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
              $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
              $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strtobool.c
strtoid.lo: $(srcdir)/strtoid.c $(incdir)/compat/stdbool.h \
            $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
            $(incdir)/sudo_gettext.h $(incdir)/sudo_queue.h \
            $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strtoid.c
strtomode.lo: $(srcdir)/strtomode.c $(incdir)/compat/stdbool.h \
              $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
              $(incdir)/sudo_gettext.h $(incdir)/sudo_queue.h \
              $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strtomode.c
strtonum.lo: $(srcdir)/strtonum.c $(incdir)/sudo_compat.h \
             $(incdir)/sudo_gettext.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/strtonum.c
sudo_conf.lo: $(srcdir)/sudo_conf.c $(incdir)/compat/stdbool.h \
              $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
              $(incdir)/sudo_conf.h $(incdir)/sudo_debug.h \
              $(incdir)/sudo_fatal.h $(incdir)/sudo_gettext.h \
              $(incdir)/sudo_plugin.h $(incdir)/sudo_queue.h \
              $(incdir)/sudo_util.h $(top_builddir)/config.h \
              $(top_builddir)/pathnames.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/sudo_conf.c
sudo_debug.lo: $(srcdir)/sudo_debug.c $(incdir)/compat/stdbool.h \
               $(incdir)/sudo_alloc.h $(incdir)/sudo_compat.h \
               $(incdir)/sudo_conf.h $(incdir)/sudo_debug.h \
               $(incdir)/sudo_fatal.h $(incdir)/sudo_gettext.h \
               $(incdir)/sudo_plugin.h $(incdir)/sudo_queue.h \
               $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/sudo_debug.c
sudo_dso.lo: $(srcdir)/sudo_dso.c $(incdir)/sudo_compat.h $(incdir)/sudo_dso.h \
             $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/sudo_dso.c
term.lo: $(srcdir)/term.c $(incdir)/compat/stdbool.h $(incdir)/sudo_compat.h \
         $(incdir)/sudo_debug.h $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
         $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/term.c
ttysize.lo: $(srcdir)/ttysize.c $(incdir)/compat/stdbool.h \
            $(incdir)/sudo_compat.h $(incdir)/sudo_debug.h \
            $(incdir)/sudo_queue.h $(incdir)/sudo_util.h \
            $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/ttysize.c
utimens.lo: $(srcdir)/utimens.c $(incdir)/compat/stdbool.h \
            $(incdir)/compat/timespec.h $(incdir)/sudo_compat.h \
            $(incdir)/sudo_util.h $(top_builddir)/config.h
	$(LIBTOOL) --mode=compile $(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $(PIE_CFLAGS) $(SSP_CFLAGS) $(DEFS) $(srcdir)/utimens.c
