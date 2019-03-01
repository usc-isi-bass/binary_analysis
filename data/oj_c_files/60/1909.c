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
	int i,j,k=sqrt(x);
	if(x==2||x==3)
		return 1;
	else
	{
		for(i=2,j=2;i<=k;i++)
		{
			if(x%i==0)
				return 0;
			else
				j++;
		}
		if(j>=k)
			return 1;
	}
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n<5)
		printf("empty\n");
	else
	{
		for(i=3;i<=n-2;i+=2)
		{
			if(prime(i)==1&&prime(i+2)==1)
				printf("%d %d\n",i,i+2);
		}
	}
	return 0;
}