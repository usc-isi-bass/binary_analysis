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
	int k;
	int i,j;
	
	scanf("%d",&k);
	
	double *num,*avr;
	num=(double *)malloc(sizeof(double)*k);
	avr=(double *)malloc(sizeof(double)*k);

	for(i=0;i<k;i++){
		num[i]=0;
		avr[i]=0;
	}

    int n;

	for(i=0;i<k;i++){
		
		scanf("%d",&n);

		double *a;
		a=(double *)malloc(sizeof(double)*n);

		for(j=0;j<n;j++){
			scanf("%lf",&a[j]);
			avr[i]+=a[j]/n;
		}
		
		for(j=0;j<n;j++){
			num[i]+=(pow((a[j]-avr[i]),2)/n);
		}
		num[i]=pow(num[i],0.5);
		free(a);
	}

	for(i=0;i<k;i++){
		printf("%.5lf\n",num[i]);
	}

	return 0;
}
