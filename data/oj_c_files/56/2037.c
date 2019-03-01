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
int a,b,k,i,t,sum;
i=10000;
sum=0;
t=1;
scanf("%d",&k);
for(i=10000;i>=1;i=i/10)
{
 a=k/i;
 b=k%i;
 k=b;
 if(a==0)
  t=t+1;
 else
  sum=sum+a*pow(10,5-t)/i;
}
printf("%d",sum);
} 

