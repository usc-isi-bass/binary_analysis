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
	int n,t[100],e[100],total,effect,i;
	double x,y[100];
	scanf("%d",&n);
	scanf("%d%d",&total,&effect);
	x=100.0*effect/total;
	for(i=0;i<(n-1);i++){
		scanf("%d%d",&t[i],&e[i]);
		y[i]=100.0*e[i]/t[i];
	}
	for(i=0;i<(n-1);i++){
		if((y[i]-x)>5){
			printf("better\n");
		}
		if((x-y[i])>5){
			printf("worse\n");
		}
		if(((y[i]-x)<=5)&&((x-y[i])<=5)){
			printf("same\n");
		}
	}
	return 0;
}