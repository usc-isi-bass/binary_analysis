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
	int n;
	int i;
	double a[100],b[100],c[100];
	double x1,x2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]*b[i]-4*a[i]*c[i]>0)
		{
			x1 = (-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
            x2 = (-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(b[i]*b[i]-4*a[i]*c[i]<0)
		{
			x1 =sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
            x2 = sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b[i]/(2*a[i]),x1,-b[i]/(2*a[i]),x2);
		}
		else
		{
			x1= -b[i]/(2*a[i]);
		printf("x1=x2=%.5f\n",x1);
		}

	}
	
}