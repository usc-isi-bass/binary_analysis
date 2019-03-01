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
	int n,i,e;
	double a[100],b[100],d[100],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a[i],&b[i]);
	}
	for(i=n-1;i>0;i--)
	{
		for(e=0;e<i;e++)
		{
			d[e]=(a[i]-a[e])*(a[i]-a[e])+(b[i]-b[e])*(b[i]-b[e]);
			if(d[e]>max)
			{
				max=d[e];
			}
		}
	}
	printf("%.4lf",sqrt(max));
	return 0;
}