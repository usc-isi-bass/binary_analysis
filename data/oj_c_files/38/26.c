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

// 100001.cpp : Defines the entry point for the console application.
//



int main(){

	int  n, k, j, i ;
	double sum, sum1, S, s, mean;
	double a[100];
    double* p;
	p=a;
	
    

	scanf("%d", &k);

	for (i=0; i<k; i++){
		sum=0;
		sum1=0;

	
		scanf("%d", &n);

		for (j=0; j<n; j++){
		scanf("%lf", p+j);
		}

		for (j=0; j<n; j++){
		sum+=*(p+j);
		}

		mean=sum/n;

		for (j=0; j<n; j++){
		sum1+=(*(p+j)-mean)*(*(p+j)-mean);
		}

		S=sum1/n;

		s=sqrt(S);

printf("%.5lf\n", s);



      
	}




	return 0;
}