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
	int k,i;
	double data[100];
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		int n,j;
		double sum=0;
		scanf("%d",&n);
		for (j=0;j<n;j++)
		{
			scanf("%lf",&data[j]);
			sum+=data[j];
		}
		sum/=n;
		double s=0;
		for (j=0;j<n;j++)
		{
			s+=pow((data[j]-sum),2);
		}
		printf("%.5f\n",sqrt(s/n));
	}
	return 0;
}
