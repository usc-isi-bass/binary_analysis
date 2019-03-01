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

struct point
{ double x;
  double y;
};
void main()
{
	struct point a[50];
	int i,j,n,k=0;
	double max,b[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i].x,&a[i].y);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=1;i<n-j;i++)
		{ 
			b[k]=sqrt((a[i].x-a[i+j].x)*(a[i].x-a[i+j].x)+(a[i].y-a[i+j].y)*(a[i].y-a[i+j].y));
			k++;
		}
	}
	max=b[0];
	for(i=1;i<k-1;i++)
	{
		if(b[i]>max)
			max=b[i];

	}
	printf("%.4lf\n",max);
}
			
