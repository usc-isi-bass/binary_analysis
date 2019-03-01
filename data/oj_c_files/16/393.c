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

void main()
{
 int a,b,c,d,e,g,h,i;
 long f;
 scanf("%ld",&f);
 a=f/10000;g=f%10000;
 b=g/1000;h=g%1000;
 c=h/100;i=h%100;
 d=i/10;e=i%10;
 if (a>0)
 printf("%d%d%d%d%d",e,d,c,b,a);
 else
  if(b>0)
  printf("%d%d%d%d",e,d,c,b);
  else
   if(c>0)
   printf("%d%d%d",e,d,c);
   else
    if(d>0)
    printf("%d%d",e,d);
    else
    printf("%d",e);
}