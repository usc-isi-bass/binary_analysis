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

main()
{
	
	int k;
    scanf("%d",&k);
	int i=1;
	int n;
	for(i;i<=k;i++)
	{
		
		scanf("%d",&n);
		int j=0;
	    double sum=0;
		double a[100];
		double s=0;
		for(j=0;j<n;j++)
		{scanf("%lf",&a[j]);
		sum=sum+a[j];}
		sum=sum/n;
		for(j=0;j<n;j++)
		s=s+pow(sum-a[j],2);
		s=s/n;
		s=sqrt(s);
		printf("%.5lf\n",s);
	}
}
