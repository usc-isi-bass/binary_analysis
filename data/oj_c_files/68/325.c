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


int prime(int x);

int main()
{
	int a,j,i;
	scanf("%d",&a);
	for(i=6;i<=a;i=i+2)
	{
		for(j=3;j<=(a/2);j=j+2)
		{
		    if(prime(j)+prime(i-j)==2)
			{
			     printf("%d=%d+%d\n",i,j,i-j);
			     break;
			}
		}
	}
	return 0;
}

int prime(int x)
{
	int i;
	int isprime=1;
	if(x==3||x==5||x==7)
	{
		return isprime;
	}
	else
	{
		for(i=3;i<=sqrt(x);i=i+2)
		{
			if(x%i==0)
			{
				isprime=0;
				return isprime;
				break;
			}
		}
	}
	return isprime;
}