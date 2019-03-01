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
	double a[300],sum=0,aver,b[300],max;
	int i,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-aver)>max)
			max=fabs(a[i]-aver);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(max-fabs(a[i]-aver)<=1e-6)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++)
		printf("%d,",(int)b[i]);
	printf("%d",(int)b[k-1]);
}


	

