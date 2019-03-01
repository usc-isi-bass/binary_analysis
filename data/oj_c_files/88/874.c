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
{ char a[30],*p;
  int i,t,n;
  gets(a);
  n=strlen(a);
  p=&a[0];t=0;
  for (i=0;i<=(n-1);i++)
    {if (*(p+i)>=48&&*(p+i)<=57) {printf("%c",*(p+i));t=0;}
        else if (t==0){printf("\n");t=1;}
     }

}