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
	int n,i,j,max,a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){b[i]=1;}
	for(i=n-2;i>=0;i--)
	{
		max=0;
		for(j=n-1;j>i;j--)
		{
			if(a[i]>=a[j])
			{
				if(b[j]>max){max=b[j];}
			}
		}
		b[i]+=max;
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
		{max=b[i];}
	}
	printf("%d",max);
}