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
 double a=1,b=1,c;
 int i,n,j,x;

 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&x);
  a=1;
  b=1;
  for(j=3;j<=x;j++)
  {   c = b;
   b = a+b;
   a = c;
  }
  printf("%.0lf\n",b);
 }
 return 0;
}