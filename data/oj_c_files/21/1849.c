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


float k( float i)
{
	if(i>=0)
		return i;
	else return -i;
}
void main()
{
	int n,a[400],s=0,max=0,min,count=0,i;
	float aver;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	aver=((float)s)/n;
	for(i=0,min=a[0];i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	if(((float)max-aver)>(-(float)min+aver))
		printf("%d",max);
    if(((float)max-aver)<(-(float)min+aver))
		printf("%d",min);
	if(((float)max-aver)==(-(float)min+aver))
		printf("%d,%d",min,max);
}