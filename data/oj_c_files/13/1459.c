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
	int a[20000],i,j,k,m=0,n,b=0,c=1;
	scanf("%d",&n);
	k=n;
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&a[i]);
	}
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
			   a[i]=0;
			   k-=1;
			   break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0&&c<k)
		{
			printf("%d ",a[i]);
			c+=1;
		}
	   else
	   {
		if(a[i]!=0&&c==k)
		{
			printf("%d",a[i]);
		}
	   }
	} 
	return 0;
}
