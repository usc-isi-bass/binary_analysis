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
    int a[100],b[100],i,n;
	double d[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&(a[i]),&(b[i]));
	}
	for(i=0;i<n;i++)
	{
		d[i]=(double)b[i]/(double)a[i]-(double)b[0]/(double)a[0];
	}
	
	for(i=1;i<n;i++)
	{
		if(d[i]>0.05)
		{
			printf("better\n");
		}
		if(d[i]<-0.05)
		{
			printf("worse\n");
		}
		if(d[i]<=0.05&&d[i]>=-0.05)
		{
			printf("same\n");
		}
	}

	return 0;
}