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
	int m,n,i,a[1000],t,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		if(t%2==1)
		{
			a[count]=t;
			count++;
		}
	}
	m=count;
	while(count>=2)
	{
		for(i=1;i<=count-1;i++)
		{
			if(a[i-1]>a[i])
			{
				t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}
		}
		count--;
	}
	printf("%d",a[0]);
	for(i=1;i<=m-1;i++)
	{
		printf(",%d",a[i]);
	}
	return 0;
}