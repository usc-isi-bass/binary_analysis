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
	int k;
	int n[100];
	double z[100][100],x[100]={0},y[100]={0};
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(int j=0;j<n[i];j++)
		{
			scanf("%lf",&z[i][j]);
			x[i]=x[i]+z[i][j];
		}
		x[i]=x[i]/(double)n[i];
		for(int t=0;t<n[i];t++)
		{
			y[i]=y[i]+(z[i][t]-x[i])*(z[i][t]-x[i]);
		}
		y[i]=sqrt(y[i]/(double)n[i]);
		printf("%.5lf\n",y[i]);
	}
	return 0;
}

