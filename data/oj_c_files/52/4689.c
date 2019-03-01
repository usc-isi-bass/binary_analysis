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

void change(int n,int m,int a[100])
{
	int b[100],i;
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=n-m;i<n;i++)
	{
		a[i-n+m]=a[i];
	}
	for(i=m;i<n;i++)
	{
		a[i]=b[i-m];
	}
}
int main()
{
	int n,m,i;
	int a[100];
	scanf("%d %d",&n,&m);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	change(n,m,a);
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
	return 0;
}