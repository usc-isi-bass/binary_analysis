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
	int i,j,n,k,b;
	int a[100010];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for (i=0;i<n-1;i++)
	{
		if (a[i]==k)
		{
			for (j=i;j<n;j++)
				a[j]=a[j+1];
			i--;
			n--;
		}
	}
	if (a[n-1]==k)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
				n=i;
		}
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
}