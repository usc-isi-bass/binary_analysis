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
    
    int i,k,n,p,j;
	int a[100010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
	{
		if(a[i]==k)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]!=k)
				{
					a[i]=a[j];
				    a[j]=k;
					break;
				}
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=k)
		{
			p=i;
			break;
		}
	}
	for(i=0;i<=p;i++)
	{
		if(i<p)
		{printf("%d ",a[i]);}
		if(i==p)
                   {printf("%d",a[i]);}
	}
	return 0;
}

 
 
 
