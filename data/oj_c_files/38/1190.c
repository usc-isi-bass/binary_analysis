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
	int i,n,j;
	double a[100][1000],x[100];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%lf",&x[i]);
		for(j=0;j<x[i];j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}

	

	for(i=0;i<n;i++)
	{
		double sum=0,s=0,m=0;
		for(j=0;j<x[i];j++)
		{
			sum+=a[i][j];
		}
		sum=sum/x[i];
		for(j=0;j<x[i];j++)
		{
			m=a[i][j]-sum;
			s=s+pow(m,2);
		}
		m=s/x[i];
		s=pow(m,0.5);
		printf("%.5lf\n",s);

	}
	return 0;
}