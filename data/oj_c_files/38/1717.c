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
	int k,n,i;
	double *x;
	scanf("%d",&k);
	while(k--){
		double sum=0,sum2=0,a,s;
		scanf("%d",&n);
		x=(double*)malloc(1000*sizeof(double));
		for(i=0;i<n;i++) {
			scanf("%lf",x+i);
			sum+=*(x+i);
		}
		a=sum/n;
		for(i=0;i<n;i++) sum2+=((*(x+i)-a)*(*(x+i)-a));
		s=sqrt(sum2/n);
		printf("%.5f\n",s);
	}
}

		

