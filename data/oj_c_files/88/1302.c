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
{const int maxn=31;
  char c[maxn],*p;

  gets(c);
  p=c;
  while(*p!='\0')
    if(*p>=48 && *p<58)
    { do{
   	    cout<<*p;
        p++;
      }while(*p>47 && *p<58);
      cout<<endl;
    } else p++;

  return 0;
}