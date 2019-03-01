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
{
    char str[122];
    gets(str);
    char *p=NULL;
    for(p=str;*p;p++)
    {
      if(*p==' ')
      {
         while(*p==' ')
          {
            p++;
          }
          p--;
          cout<<*p;
      }
      else cout<<*p;
    }
      int ss;cin>>ss; 
      return 0;
}
