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
	int k,i,n,j;
	double x[100],a=0,s=0,sum=0,upper=0;
	
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		sum=0,upper=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%lf",&x[j]);
			sum=sum+x[j];
		}
		a=sum/n;
		for(j=1;j<=n;j++)
		{
			upper=upper+pow((x[j]-a),2);
		}
		s=sqrt(upper/n);
		printf("%.5lf\n",s);

	}

	
	return 0;
}
