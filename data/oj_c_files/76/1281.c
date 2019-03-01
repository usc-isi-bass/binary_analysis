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
	int n,i,j,shuzhou[20002],a[500],b[500],max=0,min=10000,p=0;
	for(i=0;i<20002;i++)
	{
		shuzhou[i]=1;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=min)
		{
			min=a[i];
		}
		if(b[i]>=max)
		{
			max=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<20002;j++)
		{
			if(2*a[i]<=j&&b[i]*2>=j)
			{
				shuzhou[j]=0;
			}
		}
	}
	for(i=min*2;i<=max*2;i++)
	{
		if(shuzhou[i]==1)
		{
			p++;
		}
	}
	if(p!=0)
	{
		printf("no");
	}
	if(p==0)
	{
		printf("%d %d",min,max);
	}
	return 0;
}