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
	int a[500]={0},b,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				b=a[i];
				a[i]=a[i+1];
				a[i+1]=b;
			}
		}
	}
    
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d",a[i]);
			break;
		}
	}
i=i+1;
	for(;i<n;i++)
	{
		if(a[i]%2!=0)printf(",%d",a[i]);
	}
	return 0;
}