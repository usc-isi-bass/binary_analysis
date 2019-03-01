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
	int n,x,y;
	double b,c;
	int p,q;
	scanf("%d",&n);
	scanf("%d %d",&p,&q);
	double e=p,f=q;
	    c=1.00*f/e;
	for(int i=1;i<=n-1;i++){
		scanf("%d %d",&x,&y);
		double k=x,m=y;
		b=1.00*m/k;
		if(b<c){
			if(c-b<0.05){
				printf("same\n");
			}
			else
				printf("worse\n");
		}
		else if(b>c){
			if(b-c>0.05){
				printf("better\n");
			}
			else
				printf("same\n");
		}
	}
	return 0;
}


