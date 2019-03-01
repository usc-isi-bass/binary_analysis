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
	int i,j;
double a[100];
	double t;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{	scanf("%lf",&a[i]);
	scanf("\n");
	}
	scanf("%lf",&a[n-1]);
	for(j=0;j<n;j++)
	{	for(i=0;i<n-j;i++)
	{
		if(a[i+1]>a[i])
			{
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}
	}
		
	}	printf("%.0lf\n",a[0]);
			printf("%.0lf\n",a[1]);
}

