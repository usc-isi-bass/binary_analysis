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
	int n,a[100000],i,h=1,j,b[100000];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<i;j++) 
		{
			if(a[i]==a[j])
				break;
		}
		if(j==i)
		{ 
			b[h]=a[i];h++;		
		}
	}
	for(i=1;i<=h-1;i++)
	{
		if(i<h-1)printf("%d ",b[i]);
			else if(i==h-1) printf("%d",b[i]);
	}
}
