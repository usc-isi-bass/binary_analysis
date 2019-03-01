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
	scanf("%d\n",&n);
    int sz[1000][2];
	int i;
	double a,b,c;
	for(i=0;i<n;i++){
		scanf("%d %d\n",&(sz[i][0]),&(sz[i][1]));
	}
   	for(i=0;i<n;i++){
		if(i==0){
	            a=1.0*sz[i][1]/sz[i][0];
		}else{
			 b=1.0*sz[i][1]/sz[i][0];
			 if(a>=b){
				 double c=a-b;
				 if(c>0.05){
					 printf("worse\n");
				 }else{
					 printf("same\n");
				 }
			 }else{
				 double c=b-a;
				 if(c>0.05){
					 printf("better\n");
				 }else{
					 printf("same\n");
				 }
			 }
		}
	}
	return 0;
}

