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
	long n,i;
	int a=0,b,c,d,e,f;
	double sum=0;
	scanf("%ld",&n);
	f=0;
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&b);
		if(b==0)
		{
			f=i;
			sum+=i;
			a+=1;
		}
	}
	c=sum/a*2-f;
	d=f/n-c/n+1;
	e=(a-2*d)/2;
	printf("%d",(d-2)*e);
}