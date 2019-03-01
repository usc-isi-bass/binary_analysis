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
	int n,a,b,c,d;
	scanf("%d",&n);
	scanf("%d%d",&c,&d);
	double x,y;
	x=(double)d/c;
	int i;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		y=(double)b/a;
		if(y-x>=0.05)
			printf("better\n");
		if(x-y>=0.05)
			printf("worse\n");
		if(x-y<0.05&&y-x<0.05)
			printf("same\n");
	}
	return 0;
}