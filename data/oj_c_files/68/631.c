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
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<i;j+=2)
		{
			if(prime(j)&&prime(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
}
int prime(int x)
{
	int k;
	for(k=3;k<=sqrt(x);k++)
	{
		if(x%k==0)
			break;
	}
	if(k>sqrt(x))
		return 1;
	else
		return 0;
}
