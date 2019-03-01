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

float f(int n)
{
	int k;
	if(n==1) return 1;
	if(n==2) return 2;
	else
	{
		k=f(n-1)+f(n-2);
		return k;
	}
}

int main(int argc, char* argv[])
{
	int m,n,i,j;
	float sum;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		sum=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			sum+=(float)f(j+1)/f(j);
		}
		printf("%.3f\n",sum);
	}
}