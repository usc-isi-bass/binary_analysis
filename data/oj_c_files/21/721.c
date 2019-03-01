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
	int a[300];
	double b[300];
	int n;
	int i,j;
	double zong=0;
	double max=0;
	double ping;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		zong=zong+a[i];
	}
	ping=zong/n;
	for(i=0;i<=n-1;i++)
	{
		if(ping-a[i]>=0)
			b[i]=ping-a[i];
		else
			b[i]=a[i]-ping;
	}
	for(i=0;i<=n-1;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0,j=0;i<=n-1;i++)
	{
		if(b[i]==max)
		{
			j++;
			if(j==1)
				printf("%d",a[i]);
			else
				printf(",%d",a[i]);
		}
	}
	printf("\n");
	return 0;
}