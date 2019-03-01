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
	int t,n,a[100],i,max1,max2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=0;
	max2=0;
	for(i=0;i<n;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
			t=i;
		}
	}
	a[t]=0;
	printf("%d\n",max1);
	for(i=0;i<n;i++)
	{
		if(max2<a[i])
			max2=a[i];
	}
	printf("%d\n",max2);
}