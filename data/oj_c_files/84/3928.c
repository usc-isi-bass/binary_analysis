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
	int n,a[100],x,y,m=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    x=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>x)
		{	x=a[i];
		    m=i;
		}
	}
    if(m==0)
	{
		y=a[1];
		for(i=2;i<n;i++)
		{
			if(a[i]>y)
				y=a[i];
		}
	}
	else
	{
		y=a[0];
		for(i=1;i<n;i++)
		{
			if(i==m)
				continue;
			else
			{
				if(a[i]>y)
					y=a[i];
			}
		}
	}
	printf("%d\n%d",x,y);
	return 0;
}
