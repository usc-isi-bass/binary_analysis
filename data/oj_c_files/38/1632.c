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
	int k,i,n,j;
	double x[1000],sum,p,a;
    double S;
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		sum=0;
		p=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&x[i]);
			sum+=x[i];
		}
		a=(double)(sum/n);
		for(i=0;i<n;i++)
		{
			p+=(double)pow((x[i]-a),2);
		}
		p=(double)(p/n);
		S=(double)sqrt(p);
		printf("%.5f\n",S);
	}



	return 0;
}