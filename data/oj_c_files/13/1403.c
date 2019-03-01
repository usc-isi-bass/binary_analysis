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

	int a[20000],i,n,k,j,m;
	scanf("%d",&n);m=n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			if(a[i]==a[k])
			{
		//	m--; 
			n--;
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}i--;
			}
		}
		
	}
	for(i=0;i<n;i++)
    if(i<n-1)
	{printf("%d ",a[i]);}
	else {printf("%d",a[n-1]);}
	return 0;
}
