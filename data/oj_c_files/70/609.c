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
	double x[20],y[20];
	int n,i,j;
	double max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a>max)
				max=a;
    printf("%.4lf\n",sqrt(max));
}