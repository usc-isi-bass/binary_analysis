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
	int n,a,b,k,i;
	double s;
	scanf("%d%d%d",&n,&a,&b);
	s=1.0*b/a;
	k=n-1;
	int *m=(int*)malloc(sizeof(int)*k);
	int *p=(int*)malloc(sizeof(int)*k);
	double *l=(double*)malloc(sizeof(double)*k);
	for(i=0;i<n-1;i++){
		scanf("%d%d",&m[i],&p[i]);
		l[i]=1.0*p[i]/m[i]-s;
	}
	for(i=0;i<n-1;i++){
		if(l[i]>0.05){
			printf("better\n");
		}else if(l[i]<-0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	free(m);
	free(l);
	free(p);
	return 0;
}