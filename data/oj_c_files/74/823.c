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


int isHuiWen(int n)
{
	int m = n;
	int a=0;
	while(m)
	{
		a = a * 10 + m % 10;
		m /= 10;
	}
	return(a==n);
}

int isPrime(int n)
{
	double max = sqrt((double)n);
	for(int i = 2;i<=max;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int m,n;
	int j = 0;
	scanf("%d%d",&m,&n);
	for(int i = m;i<=n;i++)
	{
		if(isHuiWen(i)&&isPrime(i))
		{
			if(j)printf(",");
			printf("%d",i);
			j++;
		}
	}
	if(j == 0)
		printf("no");
	return 0;
}
