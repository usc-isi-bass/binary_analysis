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
	int n;
	int a[300]={0};
	int i,j;
	int sum=0;
	double max=0;
	double aver;
	double b[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=(double)sum/n;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(a[i]-aver);
		if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
		if(b[i]==max)
		{
			j=i;
			printf("%d",a[i]);
			break;
		}
		for(i=j+1;i<n;i++)
			if(b[i]==max)
				printf(",%d",a[i]);
}