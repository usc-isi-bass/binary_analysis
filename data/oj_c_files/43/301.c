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

void gbc(int n);
int ispn(int p);
int main()
{
	int n;
	scanf("%d",&n);
	gbc(n);
return 0;
}
void gbc(int n)
{
	int half=n/2;
	int i;
	int a,b;
	for(i=3;i<=half;i=i+2)
	{
		a=ispn(i);
		b=ispn(n-i);
		if(a&&b)
		{
			printf("%d %d\n",i,n-i);
		}
	}
}
int ispn(int p)
{
	int i,half,isprime;
	isprime=1;
	if(p%2==0)
	{
		if(p==2)
		{
			return isprime;
		}else
		{
			isprime=0;
		return isprime;
		}
	}
	half=p/2;
	for(i=3;i<=half;i=i+2)
	{
		if(p%i==0)
		{
			isprime=0;
			break;
		}
	}
	return isprime;
}

    