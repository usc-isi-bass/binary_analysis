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
	int a[100];
	int n,i,b,c,d;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0,b=0;i<=n-1;i++)
	{
		if (b<a[i])
	    b=a[i];
	}

	for(i=0;i<=n-1;i++)
	{
		if (a[i]==b)
			break;
	}
	c=i;
	for(i=0,d=0;i<=n-1;i++)
	{
		if (i!=c&&d<a[i])
		d=a[i];
	}
	printf("%d\n%d",b,d);
}
