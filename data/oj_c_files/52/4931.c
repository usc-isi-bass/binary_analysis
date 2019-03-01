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
	int m,n,i;
	int a[202];
	scanf("%d %d",&n,&m);
	scanf("%d",&a[1]);
	for(i=2;i<=n;i++)
	{scanf(" %d",&a[i]);}
	for(i=n+1;i<=2*n-m;i++)
	{a[i]=a[i-n];}
	printf("%d",a[n-m+1]);
	for(i=n-m+2;i<=2*n-m;i++)
	{printf(" %d",a[i]);}
	return 0;
}