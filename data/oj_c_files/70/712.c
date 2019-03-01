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
	int n,i,j;
	double x[100],y[100];double d,max=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
		scanf("%lf%lf",&x[i],&y[i]);
		for(j=0;j<i;j++)
		{
			d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			if(d>=max)max=d;
		}
	}
	printf("%.4f",sqrt(max));



}
