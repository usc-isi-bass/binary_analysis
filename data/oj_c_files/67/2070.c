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
	int n,i;
	double old,xlf;
	scanf("%d",&n);
	int*zs=(int*)malloc(sizeof(int)*n);
	int*yx=(int*)malloc(sizeof(int)*n);
	
	
	for(i=0;i<n;i++){
		scanf("%d%d",&zs[i],&yx[i]);
	}
	for(i=0;i<n;i++){
		if(i==0){
			old=(double)yx[i]/zs[i];
		}else{
			xlf=(double)yx[i]/zs[i];
			if(xlf-old>0.05){
				printf("better");
				printf("\n");
			}else if(old-xlf>0.05){
				printf("worse");
				printf("\n");
			}else{
				printf("same");
				printf("\n");
			}
			
		}
	}
return 0;
}