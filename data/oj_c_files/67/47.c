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

int main (){
	int n,i;
	int zs,yx;
	double a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%d %d",&zs,&yx);
			a=1.0*yx/zs;
		}else {
			scanf("%d %d",&zs,&yx);
			if(1.0*yx/zs-a>0.05){
				printf("better\n");
			}else if(1.0*yx/zs-a<-0.05){
				printf("worse\n");
			}else {
				printf("same\n");
			}
		}
	}
		
	return 0;
}