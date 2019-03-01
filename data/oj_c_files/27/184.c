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
	int n,k;
	double a[100],b[100],c[100],x1,x2,d;
	cin>>n;
	for (k=0;k<n;k++)
	{
		cin>>a[k]>>b[k]>>c[k];
		d=b[k]*b[k]-4*a[k]*c[k];
		if (d>0)
			x1=(-b[k]+sqrt(d))/(2*a[k]),
			x2=(-b[k]-sqrt(d))/(2*a[k]),
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		else if (d==0)
			x1=x2=-b[k]/(2*a[k]),
			printf("x1=x2=%.5f\n",x1);
		else
			d=sqrt(-d)/(2*a[k]),
			x1=x2=-b[k]/(2*a[k]),
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,d,x2,d);
	}
	return 0;
}