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

int f(int i)
{
 if(i==1)
 return 1;
 if(i==2)
 return 2;
 return f(i-1)+f(i-2);
}
main()
{
 int n,k,i;
 double sum=0;
 scanf("%d",&n);
 while(n--)
 {
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  sum+=((double)(f(i+1)))/((double)(f(i)));
 printf("%.3f\n",sum);
sum=0;
 }
}