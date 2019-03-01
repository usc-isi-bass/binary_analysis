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
	int n,i,num[100],k,zi[100],mu[100];
	zi[0]=2;
	mu[0]=1;
	float sum[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		for(k=0;k<num[i];k++)
		{
				sum[i]=sum[i]+(float)zi[k]/mu[k];
				mu[k+1]=zi[k];
				zi[k+1]=zi[k]+mu[k];
		}
		printf("%.3f\n",sum[i]);
	}
		return 0;
}

