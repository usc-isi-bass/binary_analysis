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

int solve(int panzi,int pingguo )
{
	if(panzi==1)
	{
		return 1;
	}
	else
	{
		if(panzi<=pingguo)
		{
			return solve(panzi-1,pingguo)+solve(panzi,pingguo-panzi);
		}
		else
		{
			return solve(panzi-1,pingguo);
		}
	}
}
int main()
{
	int t,M,N;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&M,&N);
		printf("%d\n",solve(N,M));
	}
	
}