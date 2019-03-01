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
	int a[50001],b[50001],n,i,k,e,t,s,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(k=1;k<n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				e=a[i];
				a[i]=a[i+1];
				a[i+1]=e;
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]<=b[i])
		{
			if(b[i]>b[i+1])
			{
				b[i+1]=b[i];
			    continue;
			}
		}
        else
		{
			flag=1;
			printf("no");
			break;
		}
	}
	if(flag==0)
	{
		printf("%d %d",a[0],b[i]);
	}
	return 0;

}

