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
	int a[300],i,n,max,min;
	double aver,cha1,cha2,sum=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	cha1=fabs(max-aver);
	cha2=fabs(min-aver);
	if(cha1==cha2)
		printf("%d,%d",min,max);
	else
	{
		if(cha1>cha2)
			printf("%d",max);
		else
			printf("%d",min);
	}
	return 0;
}