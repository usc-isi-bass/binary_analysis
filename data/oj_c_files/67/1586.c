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
	int n,i,x,y,a,b;
	double p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%d%d",&x,&y);
			p=1.0*y/x;
		}else{
			scanf("%d%d",&a,&b);
			q=1.0*b/a;
			if(q-p>0.05){
				printf("better\n");
			}else if(p-q>0.05){
				printf("worse\n");
			}else{
				printf("same\n");
			}
		}
	}
	return 0;
}