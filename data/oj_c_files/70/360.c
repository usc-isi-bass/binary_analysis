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


int main(int argc, char* argv[])
{
	int n, i, j, a;
	double x[1000], y[1000];
	double d, D=0;
	scanf("%d", &n);
	for(a=1;a<=n;a++)
	{
		scanf("%lf%lf", &x[a], &y[a]);
	}
    for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			d=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2));
				if(D<d)
				{D=d;}
		}
	}
	printf("%.4lf\n", D);
	return 0;
}