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
	int sz[1000][2];
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	double yx[1000];
	for(i=0;i<n;i++){
		yx[i]=0;
	}
	for(i=0;i<n;i++){
		yx[i]=(double)sz[i][1]/sz[i][0];
	}
	double bj[1000];
	for(i=0;i<n;i++){
		bj[i]=0;
	}
	for(i=1;i<n;i++){
		bj[i]=yx[i]-yx[0];
	}
	for(i=1;i<n;i++){
		if(bj[i]>0.05){
			printf("better\n");
		}
	    if(bj[i]<-0.05){
			printf("worse\n");
		}
		if((bj[i]>=-0.05)&&(bj[i]<=0.05)){
			printf("same\n");
		}
	}
	return 0;
}
	
		
		
	

	

		
	
