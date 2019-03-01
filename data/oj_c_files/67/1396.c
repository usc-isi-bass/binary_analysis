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
	scanf("%d",&n);
	double a,b,c;
	scanf("%lf%lf",&a,&b);
	c=b/a;
	for(i=0;i<n-1;i++){
		double j,k,l;
		scanf("%lf%lf",&j,&k);
		l=k/j;
		if(c-l>0.05)
			printf("worse\n");
		if(c-l<-0.05)
			printf("better\n");
		if(c-l<0.05&&c-l>-0.05)
			printf("same\n");
	}
	return 0;
}