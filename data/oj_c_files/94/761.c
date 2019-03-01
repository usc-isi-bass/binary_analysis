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
	int a[500];
	int i,j,n,t,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[i+j]>a[i+j+1])
			{
				t=a[i+j];
				a[i+j]=a[i+j+1];
				a[i+j+1]=t;
			}
		}
	}
	for(i=0,f=0;i<n;i++)
	{
		if(a[i]%2!=0&&f==0)
		{
			printf("%d",a[i]);
			f=1;
		}
		else if(a[i]%2!=0&&f!=0)
		{
			printf(",%d",a[i]);
		}
	}
}