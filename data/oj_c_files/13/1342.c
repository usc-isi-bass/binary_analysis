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
	int n,i,j,k,js,cunzai;
	scanf("%d",&n);
	int*a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
/*	if(n!=1)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
				cunzai=1;
		}
		if(cunzai==1)
			printf(" ");
	}
*/	
	for(i=1;i<n;i++)
	{
		cunzai=0;
		js=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				js++;
		}
		if(js==0)
		{
			printf(" %d",a[i]);
/*			js=0;
			cunzai=0;
			if(i!=(n-1))
			{
				for(j=i;j<n;j++)
				{
					for(k=0;k<j;k++)
					{
						if(a[k]==a[j])
							js++;
					}
					if(js==0)
					{
						cunzai=1;
					}
				}
				if(cunzai==1)
					printf(" ");
			}
*/
		}
	}
	return 0;
}
