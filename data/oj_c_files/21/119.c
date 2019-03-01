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
	int i,j,n,sum=0,temp,a[300];
	float a1,a2,average;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	average=(float)sum/(float)n;
	for (i=0;i<n;i++)
		for (j=0;j<n-i-1;j++)
		{
			if (a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	a1=fabs(average-(float)a[0]);		
	a2=fabs(average-(float)a[n-1]);
	if (a1==a2)
		printf("%d,%d",a[0],a[n-1]);
	else 
		if (a1>a2)
			printf("%d",a[0]);
		else 
			printf("%d",a[n-1]);
}