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
	int k,i,n,j,count,r=0;
	int a[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			count=a[i]+a[j];
		
			if(count==k)
			{
				printf("yes");
				break;
			}
			if(count!=k)
			{
				r++;
			}
		}
            if(count==k)
             {
                  break;
               }
	}
	if(r==(n*(n-1)/2)&&(a[n-1]+a[n-2])!=k)
	{
		printf("no");
	}
	return 0;
}
