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

int sushu(int a)
{
	int i;
	double b;
	b=sqrt(a);
	if (a%2==0)
		return 0;
	else
	{
		for (i=3;i<=b;i=i+2)
		{
			if (a%i==0)
				return 0;
		}
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int a;
	for (i=6;i<=n;i=i+2)
	{
		for (j=3;j<=i;j++)
		{
			if (sushu(j))
			{
			a=i-j;
			if (sushu(a))
			{
				printf("%d=%d+%d\n",i,j,a);
				break;
			}
			}
		}
	}
	return 0;
}