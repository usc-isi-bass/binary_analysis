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
	int n,i;
	double a,b;
	double sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a);
		scanf("%lf",&b);
		sz[i]=b/a;
	}
	for(i=1;i<n;i++)
	{
		if((sz[i]-sz[0])>0.05)
		{
			printf("better\n");
		}
		else if((sz[0]-sz[i])>0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}
