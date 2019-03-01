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

void main() 
{
	int a[100],i,n,m,b[100],j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=n-1;i>=0;i--)
		a[i+m]=a[i];
	for(i=0;i<m;i++)
		a[i]=b[i+n-m];
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			printf("%d",a[i]);
			break;
		}
		printf("%d ",a[i]);
	}
}
