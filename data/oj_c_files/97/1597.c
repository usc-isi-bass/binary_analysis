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
   int n,a,b,c,d,e,f,l,m;
   scanf("%d",&n);
   a=n/100;
   l=n/10%10;
   b=l/5;
   c=l%5/2;
   d=(l%5)%2;
   m=n%10;
   e=m/5;
   f=m%5;
   printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
   return 0;
}