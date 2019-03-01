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
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    int j,m;
        double x[1000];
	    double s=0.0,s1=0.0,a;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&x[j]);
		}
		for(j=0;j<m;j++)
		{
			s+=x[j];
		}
		a=(double)s/m;
		for(j=0;j<m;j++)
		{
			s1=s1+(x[j]-a)*(x[j]-a);
		}
	    printf("%.5lf\n",sqrt(s1/m));
	}
	return 0;
}

