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
	int n;
	double x[100],y[100],d[5000];
	double m=0;
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf",&x[i]);
		scanf("%lf",&y[i]);
		d[i]=sqrt(x[i]*x[i]+y[i]*y[i]);
	}
	for(i=0;i<=n-2;i++)
		for(j=i+1;j<=n-1;j++)
		{
			d[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			k++;
		}
	for(i=0;i<=k-1;i++)
		if(d[i]>m)
			m=d[i];
	printf("%.4f\n",m);
	return 0;
}