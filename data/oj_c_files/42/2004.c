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

int main(void)
{
	int i,j,k=0;
	int n;
	int m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;)
	{
		if(a[i]==m)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			k++;
		}
		else
		    i++;
		
	}
	for(i=0;i<n-k-1;i++)
	{
		printf("%d ",a[i]);
	} 
	printf("%d",a[n-k-1]);
	return 0;
}