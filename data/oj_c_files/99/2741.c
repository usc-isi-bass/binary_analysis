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
	int n,i,t;
	double a=0.00,b=0.00,c=0.00,d=0.00;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(t>=1&&t<=18) a++;
		if(t>=19&&t<=35) b++;
		if(t>=36&&t<=60) c++;
		if(t>=61) d++;
	}
	a=100*(double)a/n; b=100*(double)b/n;c=100*(double)c/n;d=100*(double)d/n;
	printf("1-18: %.2lf%%\n",a);
	printf("19-35: %.2lf%%\n",b);
	printf("36-60: %.2lf%%\n",c);
	printf("60??: %.2lf%%",d);
	return 0;
}
