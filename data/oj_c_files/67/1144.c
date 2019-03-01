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
	int n,i,a,b,p,q;
	double m,c[10000];
	scanf("%d",&n);
	scanf("%d%d",&p,&q);
	m=1.0*q/p;
	for(i=0;i<n-1;i++){
		scanf("%d%d",&a,&b);
		c[i]=1.0*b/a;
		
	}
	for(i=0;i<n-1;i++){
	    if((c[i]-m)>0.050){
			printf("better\n");
		}
		if((m-c[i])>0.050){
			printf("worse\n");
		}
		if(((c[i]-m)<=0.050)&&((c[i]-m)>=-0.050)){
			printf("same\n");
		}
		
	}
	return 0;
}