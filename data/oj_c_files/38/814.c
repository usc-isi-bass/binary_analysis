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
	int k,i,j;
	struct 
	{
		int n;
		double x[100];
		double S;
	}
	sz[100];

	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&sz[i].n);
		for(j=0;j<sz[i].n;j++){
			scanf("%lf",&sz[i].x[j]);
		}
	}
	for(i=0;i<k;i++){
		double a=0;
		for(j=0;j<sz[i].n;j++){
			a+=sz[i].x[j]*1.0;
		}
		a/=sz[i].n;
		sz[i].S=0;
		for(j=0;j<sz[i].n;j++){
			sz[i].S=(sz[i].x[j]-a)*(sz[i].x[j]-a)+sz[i].S;
		}
		sz[i].S=sz[i].S/sz[i].n;
		sz[i].S=sqrt(sz[i].S);
		printf("%.5lf\n",sz[i].S);
		

	}
	return 0;
}