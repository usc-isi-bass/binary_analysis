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
	int a[1000], b[1000], d[1000], m, i, j, t;
	float c[1000], sum;
	scanf("%d", &m);
	a[1]=1;
	a[2]=2;
	b[1]=2;
	b[2]=3;
	for(j=1;j<=m;j++)
	{
        t=d[j];
		scanf("%d", &t);
		sum=0;
		for(i=1;i<=t;i++)
		{
		a[i+2]=a[i+1]+a[i];
	    b[i+2]=b[i+1]+b[i];
		c[i]=(1.0*b[i])/a[i];
		sum=sum+c[i];
		}
		printf("%.3f\n", sum);
	}
		
}