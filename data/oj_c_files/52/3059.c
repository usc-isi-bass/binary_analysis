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
	int n,m,i,a[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{		
		scanf("%d",&a[i]);
	}
	for(i=0;i<2*n;i++)
	{
		if(i<n-m)
		{
			a[i+n]=a[i];
		}
	    else
	    {
		    a[m+i-n]=a[i];
	    }
	    if(i>=n+1)
	    {
		    a[i-m+1]=a[i];
	    }
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}