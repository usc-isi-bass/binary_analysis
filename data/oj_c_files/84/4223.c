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

int main ()
{
	int n;
	scanf("%d",&n);
	int a[100000];
	int i,b,c,d;
	for (i=0;i<1;i++)
	{
		scanf("%d",&a[i]);
		b=a[0];
	}
	for (i=1;i<2;i++)
	{
		scanf("%d",&a[i]);
		c=a[i];
		if (c>=b)
		{
			d=b;
			b=c;
			
		}
		else 
		{
			d=c;
		}
	}
	for (i=2;i<n;i++)
	{
		scanf("%d",&a[i]);
		c=a[i];
		if (c>=b)
		{
			d=b;
			b=c;	
		}
		else if (c<b&&c>=d)
		{
			d=c;
		}
	    else 
		{
			b=b;
			d=d;
		}

	}
	printf("%d\n%d",b,d);
	return 0;
}