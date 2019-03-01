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

struct dian
{
	double x,y;
}a[100];
void main()
{
	int n,i,k=0,j,t;
	double c[100]={0},max;
	struct dian *p=a;
	scanf("%d",&n);
	t=p;
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&p->x,&p->y);
		p++;
	}
	p=t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			c[k]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
			k++;
		}
	}
	max=c[0];
	for(i=0;i<=k;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	printf("%.4lf",max);
}