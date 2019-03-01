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


void main()
{
	unsigned long a[1000], n, i, min, max;
	double ave=0;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%d", &a[i]);	
	}
	min=a[0];
	max=a[0];
	for (i=0;i<n;i++)
	{
		ave+=a[i];
		if (a[i]<min) min=a[i];
		if (a[i]>max) max=a[i];
	}
	ave/=n;
	double d1=ave-min, d2=max-ave;
	if (fabs(d1-d2)<1e-10)
		printf("%d,%d", min, max);
	else if (d1>d2)
		printf("%d", min);
	else
		printf("%d", max);
}
