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

int main(){
	int k,i,t,n;
	scanf("%d",&k);
	double *s=(double *)malloc(sizeof(double)*k);
	double sum,a;
	
	for(i=0;i<k;i++){
		sum=0.0;
		scanf("%d",&n);
        double *x=(double *)malloc(sizeof(double)*n);
		for(t=0;t<n;t++){
			scanf("%lf",&x[t]);
			sum+=x[t];
		}
		a=sum/n;
		sum=0.0;
		for(t=0;t<n;t++){
			sum+=(x[t]-a)*(x[t]-a);
		}
		s[i]=sqrt(sum/n);

	}
	for(i=0;i<k;i++){
		printf("%.5f\n",s[i]);
	}
	return 0;
}