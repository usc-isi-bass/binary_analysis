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
	int n,i,j;
	double x[2000],y[2000],d=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])>d*d)
				d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	printf("%.4f\n", d);
	return 0;
}