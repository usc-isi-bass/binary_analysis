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

int main()
{
int n,i,j[100];
double a[100],b[100],x,y[100];
scanf("%d",&n);
scanf("%lf %lf",&a[0],&b[0]);
x=b[0]/a[0];
for(i=1;i<n;i++)
{
	scanf("%lf %lf",&a[i],&b[i]);
    y[i]=b[i]/a[i];
	if(x-y[i]>0.05)
		j[i]=1;
	else if(y[i]-x>0.05)
		j[i]=2;
	else
		j[i]=0;
}
for(i=1;i<n;i++)
{
	if(j[i]==1)
		printf("worse\n");
    if(j[i]==2)
		printf("better\n");
	if(j[i]==0)
		printf("same\n");
}
return 0;
}
