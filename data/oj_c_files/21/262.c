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
	int n,a[300],i,b[300],j,k;
	double sum=0,aver,max;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/(double)n;
	max=fabs(a[0]-aver);
	j=0;
	for(i=1;i<n;i=i+1)
	{
		if(max<fabs(a[i]-aver))
		{
			max=fabs(a[i]-aver);
		}
	}
	for(i=0;i<n;i=i+1)
	{
		if(fabs(a[i]-aver)==max)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	k=j;
	for(i=0;i<k;i=i+1)
	{
		for(j=i;j<k;j=j+1)
		{
		if(b[i]>b[j])
		{
			n=b[i];
			b[i]=b[j];
			b[j]=n;
		}
		}
	}
	printf("%d",b[0]);
	for(i=1;i<j;i=i+1)
		printf(",%d",b[i]);
}
