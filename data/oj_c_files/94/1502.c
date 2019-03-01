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
	int n,a[500],b[500],i,j=0,c,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	for(i=0;i<j;i++)
	{
		for(l=i+1;l<j;l++)
		{
			if(b[i]>b[l])
			{
				c=b[i];
				b[i]=b[l];
				b[l]=c;
			}
		}
	}
        printf("%d",b[0]);
	for(l=1;l<j;l++)
	{
		printf(",%d",b[l]);
	}
return 0;
}
