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
	int i,j,k,n;
	double x[100],s,a=0,b=0,c[100],d=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		a=0;
		b=0;
		d=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
            b=(double)x[j]/n;
			a+=b;
		}
		for(j=0;j<n;j++)
		{
		    c[j]=x[j]-a;
			d=d+pow(c[j],2);
			s=(double)sqrt(d/n);
		}
		printf("%.5lf\n",s);
	}
	return 0;
}