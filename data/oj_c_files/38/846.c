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
	int k,i,j,n[N];
	scanf("%d",&k);
	double a[N],S[N];
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		S[i]=0.0;
		double sum=0.0,x[M];
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[j]);
			sum+=x[j];
		}
		a[i]=sum/n[i];
		for(j=0;j<n[i];j++)
		{
			S[i]+=(x[j]-a[i])*(x[j]-a[i]);
		}
		S[i]=sqrt(S[i]/n[i]);
	}
	for(i=0;i<k;i++)
	{
		printf("%.5f\n",S[i]);
	}
	return 0;
}