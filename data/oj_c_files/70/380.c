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
	int i,j,n;
	double *x,*y,max,dis;
	scanf("%d",&n);
    x=(double*)malloc(n*sizeof(double));
	y=(double*)malloc(n*sizeof(double));
	if(x==NULL || y==NULL) exit(-1);
    for(i=0;i<n;i++)
		scanf("%lf %lf",&x[i],&y[i]);
    	max=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{ 
	   dis=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	   if(dis>max) max=dis;
	}
	printf("%.4lf\n",max);
}
