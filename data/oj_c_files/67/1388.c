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
	int i,j,n;
    float x,c[N],a[N],b[N],y;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	x=(b[0]/a[0]);
	for(i=0;i<n-1;i++)
	{
		y=(b[i+1]/a[i+1]);

		if((x-y)>0.05)
		{
			printf("worse\n");
		}
		else if((y-x)>0.05)
		{
			printf("better\n");
		}
		else if((y-x)<=0.05&&(x-y)<=0.05)
		{
			printf("same\n");
		}
	}
	return 0;
}

