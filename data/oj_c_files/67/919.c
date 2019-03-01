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
	int n,a,b,i;
	double x;
	scanf("%d\n",&n);
	scanf("%d %d\n",&a,&b);
	x=(double)b/a;
	for(i=0;i<n-1;i++){
		double y;
		int m,h;
		scanf("%d %d",&m,&h);
		y=(double)h/m;
		if(y-x>0.05){
			printf("better\n");
		}
		if(x-y>0.05){
			printf("worse\n");
		}
		if(x-0.05<=y&&y<=x+0.05){
			printf("same\n");
		}
	}
    return 0;
}