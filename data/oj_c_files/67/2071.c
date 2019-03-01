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
	int n, x, y, i;
	double p, m;
	scanf("%d",&n);
	for(i=0;i<1;i++)
	{
		scanf("%d%d\n",&x,&y);
		p=100*((double)y)/((double)x);
	}
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&x, &y);
		m=100*((double)y)/((double)x);
		if(p>m+5)
		{
			printf("worse\n");
		}
		else if(p<m-5)
		{
			printf("better\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}
