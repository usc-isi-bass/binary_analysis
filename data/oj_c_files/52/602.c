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
	int a[100],b[100];
	int n,m;
	int i,j;

	scanf("%d",&n);
	scanf("%d",&m);
	for (i=0;i<n-m;i++)
	{
		scanf("%d",&a[i]);
	}
	for (j=0;j<m;j++)
	{
		scanf("%d",&b[j]);	
	}
	for (j=0;j<m;j++)
	{
		printf("%d ",b[j]);	
	}
	for (i=0;i<n-m-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-m-1]);
	return 0;
}