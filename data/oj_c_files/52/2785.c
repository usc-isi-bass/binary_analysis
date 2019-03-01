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
	int n,m,i,a[201];
	scanf("%d %d\n",&n,&m);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-m;i++)
	{
		a[i+n+m]=a[i];
	}
	for (i=n-m;i<n;i++)
	{
		a[i+m]=a[i];
	}
	for (i=0;i<n;i++)
	{
		a[i]=a[i+n];
	}
	for (i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
} 