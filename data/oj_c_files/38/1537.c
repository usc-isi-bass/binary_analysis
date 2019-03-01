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
	int i,j,k,n;
	double *ptox[1000];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		double sum=0,ave,out=0;
		for(j=0;j<n;j++){
			*(ptox+j)=(double*)malloc(sizeof(double));
			scanf("%lf",*(ptox+j));
			sum+=**(ptox+j);
		}
		ave=sum/n;
		for(j=0;j<n;j++)
			out+=pow((**(ptox+j) - ave),2);
		out=sqrt(out/n);
		printf("%.5f\n",out);
		
	}
	return 0;
}

