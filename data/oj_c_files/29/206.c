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

double f(int n)
{
	if(n==1)
	{
		return 2.0;
	}
	else
	{
		return 1/f(n-1)+1.0;
	}
}
int main()
{
	int a,i,m,j;
	double sum;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		sum=0.0;
		scanf("%d",&m);
		for(j=1;j<m+1;j++)
		{
			sum+=f(j);
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}

