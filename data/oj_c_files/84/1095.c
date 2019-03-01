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
 int n,i=1;
 int a,b=0,c=0;
 scanf("%d",&n);
 while(i<=n)
 {
  scanf("%d",&a);
  if(a>b)
   c=b,b=a;
  else
   if(a>c)
    c=a;
  i++;
 }
 printf("%d\n%d",b,c);
}