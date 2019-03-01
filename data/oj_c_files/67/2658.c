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

double a,b,c,d;
double limit = 0.05;
int n;
int main()
{
	scanf("%d",&n);
	scanf("%lf%lf",&a,&b);
	double t = b / a;
//	int temp = t * 100;
	//printf("%d\n",temp);
	for(int i = 1;i < n;i ++){
		scanf("%lf%lf",&c,&d);
		double t1 = d / c;
	//	printf("%d\n",t1);
	//	printf("%d\n",abs(t1 - temp));
		if(t1 - t > limit) printf("better\n");
		else if(t - t1 > limit) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}