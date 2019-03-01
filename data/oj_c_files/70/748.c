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
	double max=0,m,x[1000],y[1000];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n;i++)
		for(j=1;j<n;j++)
		{
			m=pow(x[j]-x[i],2)+pow(y[j]-y[i],2);
			if(m>max)
				max=m;
		}
		printf("%.4lf\n",sqrt(max));
		return 0;
}
