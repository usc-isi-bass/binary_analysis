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
	int a[310],max,min,n,i;
	float sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			max=a[i];min=a[i];sum=a[i];
		}
		else
		{
			sum+=a[i];
			max=(a[i]>max)? a[i]:max;
			min=(a[i]<min)? a[i]:min;
		}
	}
	sum=sum/n;
	if((max-sum)>(sum-min))
		printf("%d",max);
	else if((max-sum)<(sum-min))
		printf("%d",min);
	else printf("%d,%d",min,max);
}
