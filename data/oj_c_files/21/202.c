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
	int n, i, j, a[10000]; 
	float sum=0, ave, max=0, b, c, d, e;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		sum=sum+(float)a[i];
	}
	ave=sum/(float)n;
	c=ave;
	b=ave;
	for(j=0; j<n; j++)
	{
		if((float)a[j]>c)
			c=(float)a[j];
		else if((float)a[j]<b)
			b=(float)a[j];
	}
	d=c-ave;
	e=ave-b;
	if(d>e)
	    printf("%d\n", (int)c);
	else if(d<e)
		printf("%d\n", (int)b);
	else
		printf("%d,%d\n", (int)b, (int)c);
	return 0;
}