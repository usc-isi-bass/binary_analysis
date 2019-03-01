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
	struct
	{
		int h,r;
	}a[30];
	int i,j,m,n,k=1;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i].h);
		a[i].r=1;
	}
	for (i=n-1;i>=0;i--)
	{
		for (j=i+1;j<n;j++)
		{
			if ((a[i].h>=a[j].h) && (a[i].r<=(a[j].r+1)))
				a[i].r=a[j].r+1;
		}
	}
	for (i=0;i<n;i++)
	{
		if (k<=a[i].r)
			k=a[i].r;
	}
	printf("%d\n",k);
	return 0;
}