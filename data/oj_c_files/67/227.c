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
    int i,n;
	int bing[100],you[100];
	double c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&bing[i],&you[i]);
	}
	c=100.00*(1.000*you[0]/bing[0]);
	for(i=1;i<n;i++)
	{
		d=100.00*(1.000*you[i]/bing[i]);
		if((d-c)>5.00)
			printf("better\n");
		else if((c-d)>5.00)
            printf("worse\n");
		else
			printf("same\n");
	}

	return 0;
}