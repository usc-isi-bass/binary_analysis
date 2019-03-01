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
	int n,i,j,a[300],b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
	    b[j]=0;
	}
	for(i=0;i<n;i++)
	{
		int m=a[i];
		for(j=i+1;j<n;j++)
		{
			if(m==a[j])
			{
				b[j]=1;
			}
		}
	}
    printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==0)
		{
			printf(",%d",a[i]);
		}
	}
	return 0;
}
