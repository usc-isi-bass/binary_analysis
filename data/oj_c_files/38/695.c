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
	int n,a,i,j;
	double x[100][1000],sum[100],S[100],ave[100],sum2[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		S[i]=0;
		ave[i]=0;
		sum2[i]=0;
	}
	for(i=0;i<n;i++)
	{
		a=0;
		scanf("%d",&a);
		for(j=0;j<a;j++)
		{
			scanf("%lf",&x[i][j]);
			sum[i]+=x[i][j];
		}
		ave[i]=sum[i]/(a*1.0);
		for(j=0;j<a;j++)
		{
			sum2[i]+=(x[i][j]-ave[i])*(x[i][j]-ave[i]);
		}
		S[i]=sqrt(sum2[i]/(a*1.0));
	}
	for(i=0;i<n;i++)
		printf("%.5lf\n",S[i]);
	return 0;
}