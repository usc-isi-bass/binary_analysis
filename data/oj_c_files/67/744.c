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
	int n;
	scanf("%d",&n);
	int a[100],b[100],i;
	double c[100];
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		c[i]=(double)b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if(c[i]-c[0]>0.05){ printf("better\n");continue;}
		if(c[0]-c[i]>0.05){ printf("worse\n");continue;}
		else {printf("same\n");continue;}

	}
}

