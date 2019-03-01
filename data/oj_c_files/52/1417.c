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
    int a[200];
	int n,i,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<=n-1;i++)
	{
		a[i+n]=a[i];
	}
	for(i=0;i<=m-1;i++)
	{
		a[i]=a[i+2*n-m];
	}
	for(i=m;i<=n-1;i++)
	{
		a[i]=a[i+n-m];
	}
	for(i=0;i<=n-2;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}