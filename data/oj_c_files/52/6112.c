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
	int a[1000],b[1000];
	int i,n,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n-m;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d", &b[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d ", b[i]);
	}
	for(i=0;i<n-m-1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d", a[n-m-1]);
}