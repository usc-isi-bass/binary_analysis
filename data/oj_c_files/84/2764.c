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
	int n,a[100],i,b=0,c=0;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>=b)
		{
			b=a[i];
		}
	}
	printf("%d\n",b);
	for (i=0;i<=n-1;i++)
	{
		if(a[i]==b)
		{
			b=b+1;
		}
		else if(a[i]>=c&&a[i]<b)
		{
			c=a[i];
		}
	}
	printf("%d",c);
}