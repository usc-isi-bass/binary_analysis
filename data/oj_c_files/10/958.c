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
	int k,a[100]={0},i=0,j=0,d[100]={0},c=0,max=1;
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)
		scanf("%d",&a[i]);
	d[k-1]=1;
	for(i=k-2;i>=0;i--)
	{
		for(j=k-1;j>i;j--)
		{
			if((d[j]>c)&&(a[j]<=a[i]))
				c=d[j];
		}
		d[i]=c+1;
		c=0;
	}
	for(i=0;i<=k-1;i++)
	{
		if(d[i]>max)
			max=d[i];
	}
	printf("%d",max);
}