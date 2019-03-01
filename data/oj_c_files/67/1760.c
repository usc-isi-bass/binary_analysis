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
	int n,x[100],y[100],i;
	double z[100],k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
		z[i]=1.0*y[i]/x[i];
	}
	for(i=1;i<n;i++){
		k=z[i]-z[0];
		if(k>0.05){
			printf("better\n");
		}
		if(k<0.05&&k>-0.05){
			printf("same\n");
		}
		if(k<-0.05){
			printf("worse\n");
		}
	}
	return 0;
}