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
  int n,i,j=0,k=0,p=0,q=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
  j+=i*i;
}
for(i=1;i<=n;i++)
{
  if(i%7==0)
  {
    k+=i*i;
   }
}
for(i=1;i<=n;i++)
{
  if(i/10==7)
  {
    p+=i*i;
   }
}
for(i=1;i<=n;i++)
{
  if(i%10==7)
  {
    q+=i*i;
   }
}
if(n<7)
printf("%d",j);
if(n<70&n>=7)
printf("%d",j-k-p-q+7*7);
if(n>=77)
printf("%d",j-k-p-q+7*7+70*70+77*77*2);
if(n>=70&&n<77)
printf("%d",j-k-p-q+7*7+70*70);
return 0;
}
