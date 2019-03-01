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
	int cases;
	double x,y,rate;
	scanf("%d",&cases);
	cases--;
	scanf("%lf %lf",&x,&y);
	rate=y/x;
	while(cases--){
		scanf("%lf %lf",&x,&y);
		if(y/x-rate>0.05)printf("better\n");
		else if(rate-y/x>0.05)printf("worse\n");
		else printf("same\n");
	}
}