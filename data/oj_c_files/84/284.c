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
	int n,i,a[10000],x,y,z,t;
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=a[1];y=a[2];
	if(x<y) {x=a[2];y=a[1];}
	for (i=3;i<=n;i++)
	{
		z=a[i];
		if(z>y)
		{
			y=z;
			if(y>x)
			{
				t=x;
				x=y;
				y=t;
			}
		}
	}
	printf("%d\n%d",x,y);

}