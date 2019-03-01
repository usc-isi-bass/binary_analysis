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
	int n;
	scanf("%d",&n);
	int i=0;
	double a,b,ratecoil;
	scanf("%lf %lf",&a,&b);
    ratecoil=b/a;
	double rate;
	for(i=0;i<n-1;i++)
	{
		a=b=rate=0;
		scanf("%lf %lf",&a,&b);
		rate=b/a;
		if(rate>ratecoil)
		{
			if((rate-ratecoil)>0.05)
				printf("better\n");
			else
				printf("same\n");
		}
		if(rate==ratecoil)
			printf("same\n");
		if(rate<ratecoil)
		{
			if((ratecoil-rate)>0.05)
				printf("worse\n");
		    else
			printf("same\n");
		}
	}
	return 0;
}