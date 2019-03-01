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
	int n,m[100],i,j;
	double x[1000],y[100],z[100]={0},p[100],g[100];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m[j]);
		for(i=0;i<m[j];i++)
		{
			scanf("%lf",&x[i]);
			z[j]+=x[i];
		}
		p[j]=z[j]/m[j];
		for(i=0;i<m[j];i++)
			y[j]+=pow(x[i]-p[j],2);
		g[j]=sqrt(y[j]/m[j]);
	}
	for(j=0;j<n;j++)
		printf("%0.5lf\n",g[j]);
	return 0;
}


