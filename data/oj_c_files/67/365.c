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
	float xg[1000],a,b,x;
	scanf("%d",&n);
	scanf("%f%f",&a,&b);
	x=(b/a)*100;
         for(i=0;i<n-1;i++)
	{
                  float p,q,y;
		scanf("%f%f",&p,&q);
		y=(q/p)*100;
		xg[i]=y;
	}
	for(i=0;i<n-1;i++)
	{
		if((x-xg[i])>5)
		{
			printf("worse\n");
		}
		else if((xg[i]-x)>5)
		{
			printf("better\n");
		}
		else{
                           printf("same\n");
		}
	}
	return 0;
}