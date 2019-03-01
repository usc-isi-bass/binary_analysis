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
	double n,a,b,c,d,m;
	scanf("%lf%lf%lf\n",&n,&a,&b);
	m=b/a;
	while(n>1){
		scanf("%lf%lf\n",&c,&d);
		a=m-d/c;
		if(a>0.05)
			printf("worse\n");
		if(a<-0.05)
			printf("better\n");
		if(a<=0.05&&a>=-0.05)
			printf("same\n");
		n=n-1;
	}
	return 0;
}