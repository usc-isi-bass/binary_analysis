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
	int k,i,j;
	int n[100];
	double x[100][1000],y[100]={0.0},z[100],sum[100]={0.0},average[100];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++){
			scanf("%lf",&x[i][j]);
		}
	}
	for(i=0;i<k;i++){
		for(j=0;j<n[i];j++){
			sum[i]+=x[i][j];
		}
		average[i]=sum[i]/n[i];
	}
	for(i=0;i<k;i++){
		for(j=0;j<n[i];j++){
			y[i]+=((x[i][j]-average[i])*(x[i][j]-average[i]));
		}
		z[i]=sqrt(y[i]/n[i]);
	}
	for(i=0;i<k;i++){
		printf("%.5lf\n",z[i]);
	}
	return 0;
}
	