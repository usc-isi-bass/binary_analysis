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
	int n,i,m;
	int a[200];
	scanf ("%d %d",&n,&m);
	getchar();
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-m;i++)
	{
		a[n+i]=a[i];
	}
	for (i=0;i<n-1;i++)
	{
		a[i]=a[n-m+i];
		printf ("%d ",a[i]);
	}
	a[n-1]=a[2*n-m-1];
	printf ("%d",a[n-1]);
	return 0;
}
