#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
     int len,i;
     char s[100];
     gets(s);
     len=strlen(s);
     if(s[0]!=' '){ printf("%c",s[0]); }
     for(i=1;i<len;i++){
          if(s[i]!=' '){ printf("%c",s[i]);  continue;}
          if(s[i-1]!=' '&&s[i]==' '){ printf("%c",s[i]); continue;}
          if(s[i-1]==' '&&s[i]==' '){continue;}
     }
     return 0;
}