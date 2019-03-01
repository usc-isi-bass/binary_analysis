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


int main()
{
	int prime(int x);
	int a,i,j;
	scanf("%d",&a);
	for (i=6;i<=a;i=i+2)
	{
		for (j=2;j<=i;j++)
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

int prime(int x)
{
	int k;
	if (x==1)
		return 0;
	else if (x==2)
		return 1;
	else
	{
		for (k=2;k<=sqrt(x);k++)
		{
			if(x%k==0)
				return 0;
		}
		return 1;
	}
}
