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
	double a[100];
	double c,b;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%lf%lf",&c,&b);
		a[i]=b/c;
	}
	for(i=1;i<n-1;i++){
		if(a[i]-a[0]>0.05){
			printf("better\n");
		}
		else if(a[0]-a[i]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	if(a[n-1]-a[0]>0.05){
		printf("better");
	}
	else if(a[0]-a[n-1]>0.05){
		printf("worse");
	}
	else{
		printf("same");
	}
	return 0;
}