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


int prime(int x)
{
	int prime=1,i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<=i/2;j=j+2)
		{
			if(prime(j)==1&&prime(i-j)==1)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}