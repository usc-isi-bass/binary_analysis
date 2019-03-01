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
	int n,i,a,b;
	double x,y;
	scanf("%d%",&n);
    scanf("%d%d",&a,&b);
	x=(double)b/a;
	for (i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		y=(double)b/a;
		if (y-x>0.05) printf("better\n");
		else if (x-y>0.05) printf("worse\n");
		     else printf("same\n");
	}
    return 0;
}
