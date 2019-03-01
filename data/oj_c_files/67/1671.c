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
	int n,i,a[100],b[100];
	double x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(a[i]),&(b[i]));
	}
	for(i=0;i<n;i++){
		if(i==0){
		x=1.0*b[i]/a[i];
		}
		if(i>0){
			y=1.0*b[i]/a[i];
			if(y-x>0.05){
				printf("better\n");
			}
			if(x-y>0.05){
                printf("worse\n");
			}
			else if(x-y>=-0.05&&x-y<=0.05){
                 printf("same\n");
			}
		}
	}
	return 0;
}