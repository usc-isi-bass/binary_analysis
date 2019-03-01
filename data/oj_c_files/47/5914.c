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
	int n,a[100],i,j,m,d,c[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[i]=m;
	}
	if(n/2==0)
		d=n/2;
	else 
		d=(n+1)/2;
		for(j=0;j<d;j++)
		{
			c[j]=a[n-1-j];
			printf("%d ",c[j]);
		}
			for(j=d;j<n;j++)
		{
			c[j]=a[n-1-j];
			if(j==(n-1))
					printf("%d",c[j]);
			else
	printf("%d ",c[j]);
		}
return 0;
}

