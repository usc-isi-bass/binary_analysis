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
	int n,i,j,num=0,k=1;
	int a[300],b[300];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
			num=num+1;
	}
	
		for(i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				if(k<num)
				{
					printf("%d,",a[i]);
					k++;
				}
				else
				{
					printf("%d",a[i]);
					break;
				}
			}
		}
	printf("\n");
}
