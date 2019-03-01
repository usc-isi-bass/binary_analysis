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
	int a[300],n,i,j,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		max=a[i]>max?a[i]:max;
	}
	for(i=0;i<n;i++)
		if(a[i]<=max)
			for(j=i+1;j<n;j++)
				if(a[j]==a[i]) a[j]=max+1;
	for(i=0;i<n;i++)
		if(a[i]<=max)
		{
			printf("%d",a[i]);
			break;
		}
	for(j=i+1;j<n;j++)
		if(a[j]<=max)
			printf(",%d",a[j]);
}
