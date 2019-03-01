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
	int n,m,i;
	int a[400];
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		a[i+200]=a[i];
	}
	for(i=1;i<=m;i++)
	{
		a[i]=a[i+n-m+200];
	}
	for(i=1;i<=n-m;i++)
	{
		a[m+i]=a[200+i];
	}
	for(i=1;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n]);
}
