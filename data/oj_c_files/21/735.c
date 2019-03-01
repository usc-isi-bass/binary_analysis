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
	int i,j,k,l,m,n;
	double average,sum=0.0,max;
	int a[305];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	max=fabs(a[0]-average);
   // printf("%lf  %lf",average,max);
	for(i=1;i<n;i++)
	{
		if(fabs(a[i]-average)>max) max=fabs(a[i]-average);
	}
    for(i=0;i<n;i++)
	{
		if(max-fabs(a[i]-average)<1e-6) {printf("%d",a[i]);
		break;}
	}
	for(i++;i<n;i++)
	{

		if(max-fabs(a[i]-average)<(1e-6)) printf(",%d",a[i]);
	}
	return 0;
}
		