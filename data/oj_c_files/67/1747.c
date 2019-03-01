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
	int n,a,b,i,m,k;
	double x,y;
	scanf("%d %d %d",&n,&a,&b);
	x=1.0*b/a;
	for(i=0;i<n-1;i++){
		scanf("%d %d",&m,&k);
		y=1.0*k/m;
		if(x-y>0.05){
			printf("worse");
			printf("\n");
		}else if(y-x>0.05){
			printf("better");
			printf("\n");
		}else {
			printf("same");
			printf("\n");
		}
	}
		return 0;
	}