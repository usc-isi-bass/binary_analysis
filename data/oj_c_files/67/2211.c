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
	int n,i=0;
	double x,y,a,b;
	scanf("%d",&n);
	int bls[100],lxs[100];
	for(i=0;i<n;i++){
		scanf("%d %d",&bls[i],&lxs[i]);
	}
	a=bls[0];
	b=lxs[0];
	x=(b/a)*100;
	for(i=1;i<n;i++){
		a=bls[i];
		b=lxs[i];
		y=(b/a)*100;
		if(y-x>5){
			printf("better\n");
		}else if(x-y>5){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
