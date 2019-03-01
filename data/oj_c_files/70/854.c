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


double x[10000], y[10000];

int main()
{
	int i,j,n;
	cin >>n;
	for (i=0; i<n; ++i)
		cin >>x[i]>>y[i];
	double ans=0.0;
	for (i=0; i<n; ++i)
		for (j=i+1; j<n; ++j)
		{
			double dist=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if (dist > ans)
				ans = dist;
		}
	printf("%.4lf\n", ans);
	return 0;
}