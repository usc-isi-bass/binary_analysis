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
	double n,x,y;
	double a[100],b[100];
	double e,c;
	double xl[100];
	scanf("%lf%lf%lf",&n,&x,&y);
	e=y/x;
	for(int i=0;i<n-1;i++){
		scanf("%lf%lf",&a[i],&b[i]);
		xl[i]=b[i]/a[i];
	}
	for(int k=0;k<n-1;k++){
		c=xl[k]-e;
		if(c>0.05){
			printf("better\n");
		}
		if(c<-0.05){
			printf("worse\n");
		}
		if(-0.05<=c&&c<=0.05)
			printf("same\n");
	}

	
	return 0;
}