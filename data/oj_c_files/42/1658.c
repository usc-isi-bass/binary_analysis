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
	int n,a[100000],k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;)
	{
		if(a[i]==k)
		{
			if(i==n-1)
			{
				n=n-1;
				break;}
			else
			{
				for(j=i;j<n-1;j++)
				{
					a[j]=a[j+1];
				}
				n=n-1;
			}
			continue;
 
		}
		i+=1;
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		printf("%d",a[i]);
		else 
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}