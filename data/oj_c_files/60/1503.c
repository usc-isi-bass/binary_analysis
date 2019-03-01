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
	int timer=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i++)
	{
		if(prime(i))
		{
			if(prime(i+2))
			{
				printf("%d %d\n",i,i+2);
				timer++;
			}
		}
	}
	if(timer==0)
	{
		printf("empty");
	}
	return 0;
}
int prime(int x)
{
	int echo,i;
	for(i=2;i<=x;i++)
	{
		if(x%i==0)
		{
			break;
		}
	}
	if(i==x)
	{
		echo=1;
	}
	else
	{
		echo=0;
	}
	return echo;
}