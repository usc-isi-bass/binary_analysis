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
	int a[300]={0};
	int c,n,max,min,sum;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	max=a[0];
	min=a[0];
	sum=a[0];
	if(n>1)
	{
		for(c=1;c<n;c++)
			scanf("%d",&a[c]);
		for(c=1;c<n;c++)
		{
			sum=sum+a[c];
			if(max<a[c])
				max=a[c];
			if(min>a[c])
				min=a[c];
		}
		if(max*n-sum>sum-min*n)
			printf("%d\n",max);
		else
		{
			if(max*n-sum<sum-min*n)
				printf("%d\n",min);
			else
				printf("%d,%d\n",min,max);
		}
	}
	else
		NULL;
}