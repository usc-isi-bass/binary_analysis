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
	int n,m,i,j,a[201];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (i>=m && i<n)
		{
			a[i+n]=*(a+i-m);
		}
		else a[i+n]=*(a+i+n-m);
	}
	for(i=0;i<n;i++)
	{
		if (i!=0)
		printf(" %d",a[i+n]);
		else printf("%d",a[i+n]);
	}
}
