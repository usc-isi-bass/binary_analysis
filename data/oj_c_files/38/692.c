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
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,j;
		double x[1001]={0},a=0,s=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&x[j]);
			a=a+x[j];
		}
		a=a/m;
		for(j=0;j<m;j++)
		{
			s=s+(x[j]-a)*(x[j]-a);
		}
		s=sqrt(s/m);
		printf("%.5f\n",s);
	}
    return 0;
}
