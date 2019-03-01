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
	int k,n,i,t;
	double a[100],ave=0.00,s;
	scanf("%d",&k);
	for(t=0;t<k;t++)
	{
		ave=0.00;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
			ave=ave+a[i];
		}
		ave=ave/n;
		//printf("%lf",ave);
		s=0.00;
		for(i=0;i<n;i++)
		{
			s=s+(a[i]-ave)*(a[i]-ave);
		}
		s=s/n;
	//	printf("%lf",s);
		s=sqrt(s);
		printf("%.5f\n",s);
	}
}