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
	int n,i;
	scanf("%d",&n);
	if (n<=4)
	{
		printf("empty\n");
	}
	else
	{
		for (i=3;(i+2)<=n;i+=2)
		{
			if (prime(i) && prime(i+2))
			{
				printf("%d %d\n",i,i+2);
			}
		}
	}
	return 0;
}
int prime(int x)
{
	int i;
	for (i=3;i<=((x-1)/2);i+=2)
	{
		if (x%i==0)
		{
			return 0;
		}
	}
	return 1;
}