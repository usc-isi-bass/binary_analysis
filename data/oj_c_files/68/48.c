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

int isprimenumber(int m)
{
	int i,isprime=1;
	if (m%2==0)
	{
		if(m==2)
		{
		return isprime;
		}
		isprime=0;
		return isprime;
	}
	for(i=3;i<=sqrt(m);i=i+2)
	{
		if(m%i==0)
		{
			isprime=0;
			break;
		}
	}
	return isprime;
}

void gb(int a)
{
	int j;
	printf("%d=",a);
	for(j=2;j<=(a/2);j=j+1)
	{
		if((isprimenumber(j))&&(isprimenumber(a-j)))
		{
			printf("%d+%d\n",j,a-j);
		    break;
		}
	}
}

int main()
{
	int n,k;
	scanf("%d",&n);
	for (k=6;k<=n;k=k+2)
	{
		gb(k);
	}
	return 0;
}



