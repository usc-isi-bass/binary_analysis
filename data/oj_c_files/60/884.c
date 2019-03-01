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

int isprime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
			break;
		}
	}
//	if(i==sqrt(n)+1)
//	{
		return 1;
//	}
}
int main()
{
	int n,i,j,p=0;
	scanf("%d",&n);
	for(j=3;j<=n;j++)
	{
		if(isprime(j))
		{
			if(isprime(j+2)&&(j+2<=n))
			{
				p=1;
			}
		}
		if(p==1)
		{
			printf("%d %d\n",j,j+2);
			p=2;
		}
	}
	if(p==0)
	{
		printf("empty");
	}
	return 0;
}