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
	int n,i,a[100],b[100];
	double c,d;
	scanf("%d",&n);
	scanf("%d %d",&a[0],&b[0]);
	c=(double)b[0]/a[0];
	for(i=1;i<n;i++)
	{
        scanf("%d %d",&a[i],&b[i]);
		d=(double)b[i]/a[i];
		if(d>(c+0.05))
		{
			printf("better\n");
		}
		if(d<(c-0.05))
		{
			printf("worse\n");
		}
		if(d<=(c+0.05)&&d>(c-0.05))
		{
			printf("same\n");
		}
	}
	return 0;
}

		
