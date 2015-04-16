#include <stdio.h>
#include <libxml/xmlversion.h>
static const char format_usage[] = {
'X','M','L','S','t','a','r','l','e','t',' ','T','o','o','l','k','i','t',':',' ','F','o','r','m','a','t',' ','X','M','L',' ','d','o','c','u','m','e','n','t','\n',
'U','s','a','g','e',':',' ','%','s',' ','f','o',' ','[','<','o','p','t','i','o','n','s','>',']',' ','<','x','m','l','-','f','i','l','e','>','\n',
'w','h','e','r','e',' ','<','o','p','t','i','o','n','s','>',' ','a','r','e','\n',
' ',' ','-','n',' ','o','r',' ','-','-','n','o','i','n','d','e','n','t',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','d','o',' ','n','o','t',' ','i','n','d','e','n','t','\n',
' ',' ','-','t',' ','o','r',' ','-','-','i','n','d','e','n','t','-','t','a','b',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','i','n','d','e','n','t',' ','o','u','t','p','u','t',' ','w','i','t','h',' ','t','a','b','u','l','a','t','i','o','n','\n',
' ',' ','-','s',' ','o','r',' ','-','-','i','n','d','e','n','t','-','s','p','a','c','e','s',' ','<','n','u','m','>',' ','-',' ','i','n','d','e','n','t',' ','o','u','t','p','u','t',' ','w','i','t','h',' ','<','n','u','m','>',' ','s','p','a','c','e','s','\n',
' ',' ','-','o',' ','o','r',' ','-','-','o','m','i','t','-','d','e','c','l',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','o','m','i','t',' ','x','m','l',' ','d','e','c','l','a','r','a','t','i','o','n',' ','<','?','x','m','l',' ','v','e','r','s','i','o','n','=','"','1','.','0','"','?','>','\n',
' ',' ','-','-','n','e','t',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','a','l','l','o','w',' ','n','e','t','w','o','r','k',' ','a','c','c','e','s','s','\n',
' ',' ','-','R',' ','o','r',' ','-','-','r','e','c','o','v','e','r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','t','r','y',' ','t','o',' ','r','e','c','o','v','e','r',' ','w','h','a','t',' ','i','s',' ','p','a','r','s','a','b','l','e','\n',
' ',' ','-','D',' ','o','r',' ','-','-','d','r','o','p','d','t','d',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','r','e','m','o','v','e',' ','t','h','e',' ','D','O','C','T','Y','P','E',' ','o','f',' ','t','h','e',' ','i','n','p','u','t',' ','d','o','c','s','\n',
' ',' ','-','C',' ','o','r',' ','-','-','n','o','c','d','a','t','a',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','r','e','p','l','a','c','e',' ','c','d','a','t','a',' ','s','e','c','t','i','o','n',' ','w','i','t','h',' ','t','e','x','t',' ','n','o','d','e','s','\n',
' ',' ','-','N',' ','o','r',' ','-','-','n','s','c','l','e','a','n',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','r','e','m','o','v','e',' ','r','e','d','u','n','d','a','n','t',' ','n','a','m','e','s','p','a','c','e',' ','d','e','c','l','a','r','a','t','i','o','n','s','\n',
' ',' ','-','e',' ','o','r',' ','-','-','e','n','c','o','d','e',' ','<','e','n','c','o','d','i','n','g','>',' ',' ',' ','-',' ','o','u','t','p','u','t',' ','i','n',' ','t','h','e',' ','g','i','v','e','n',' ','e','n','c','o','d','i','n','g',' ','(','u','t','f','-','8',',',' ','u','n','i','c','o','d','e','.','.','.',')','\n',
#ifdef LIBXML_HTML_ENABLED
' ',' ','-','H',' ','o','r',' ','-','-','h','t','m','l',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','i','n','p','u','t',' ','i','s',' ','H','T','M','L','\n',
#endif
' ',' ','-','h',' ','o','r',' ','-','-','h','e','l','p',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','p','r','i','n','t',' ','h','e','l','p','\n',
'\n',
0 };
void fprint_format_usage(FILE* out, const char* argv0) {
  fprintf(out, format_usage, argv0);
}
