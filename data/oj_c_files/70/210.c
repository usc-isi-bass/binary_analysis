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




void main(int argc, char* argv[])
{int n,i,j;
float x[100],y[100];
double dis,temp=0;
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
	scanf("%f %f\n",&x[i],&y[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i;j<n-2;j++)
	{
		dis=(2*sqrt((x[i]-x[j+1])*(x[i]-x[j+1])+(y[i]-y[j+1])*(y[i]-y[j+1])))/2;

    	if(temp<dis)temp=dis;
	}
}
printf("%.4f\n",temp);
}
