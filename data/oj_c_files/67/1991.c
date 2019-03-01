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
	int n;
	double sy[100][2];
	scanf("%d",&n);
	double *sz=(double*)malloc(sizeof(double)*n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf",&sy[i][0],&sy[i][1]);
		sz[i]=sy[i][1]/sy[i][0];
	}
    for(int k=1;k<n;k++){
		if((sz[k]-sz[0])<0.05&&(sz[k]-sz[0])>-0.05){
			printf("same\n");
		}else if((sz[0]-sz[k])>=0.05){
			printf("worse\n");
		}else if((sz[k]-sz[0])>=0.05){
			printf("better\n");
		}
	}
	return 0;
}
