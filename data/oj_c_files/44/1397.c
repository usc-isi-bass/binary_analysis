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
{int reverse(int num); 
int a[6],i;
for(i=0;i<6;i++)
scanf("%d",&a[i]);
for(i=0;i<6;i++)
{
while(a[i]%10==0)
{a[i]=a[i]/10;}
}
for(i=0;i<6;i++)
printf("%d\n",reverse(a[i]));
}
int reverse(int num)
{
	int s=0,p;
	for(;abs(num)>0;)
	{p=num%10;
	s=s*10+p;
	num=num/10;}
	return(s);}
	