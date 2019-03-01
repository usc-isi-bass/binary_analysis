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


void change(int n,int a[])
{
	int i;
	for(i=n-1;i>=1;i--)
	{
		a[i-1]=a[i-1]+a[i];
		a[i]=a[i-1]-a[i];
		a[i-1]=a[i-1]-a[i];
	}
}

void main(void)
{
	int m,n,a[100];
	scanf("%d %d",&n,&m);

	int i;
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);

	for(i=1;i<=m;i++)
		change(n,a);

	for(i=0;i<=n-2;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
}