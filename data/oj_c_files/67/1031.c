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
	int i;
	double j,k,l,n,a[1000],b[1000];
	scanf("%lf",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf %lf",&j,&k);
		b[i]=k/j;
	}
	for(i=1;i<=n-1;i++)
	{
		if(b[i]-b[0]>0.05)
			printf("better\n");
		if(b[i]-b[0]<-0.05)
			printf("worse\n");
		if(b[i]-b[0]<=0.05&&b[i]-b[0]>=-0.05)
			printf("same\n");
	}
	return 0;
}