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

int main()
{   char s[255];
    char si[255];
    int i;
    int n=0;
    gets(s);
    for(i=0;s[i];i++)
    { if(s[i]!=' ')
      { si[n]=s[i];
        n++;}
      else if(s[i]==' '&&s[i-1]!=' '&&i>0)
      {  si[n]=s[i];
         n++;}
      else if(i==0&&s[i]==' ')
      {  continue;}
      }
    si[n]='\0';
    puts(si);
    return 0;
}
        
