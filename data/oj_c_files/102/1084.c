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
	char xb[40][8];
	double sg[40],sz[40],ns[40];
	int i,n,k=0,j=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",&xb[i],&sg[i]);
	}
	for(i=0;i<n;i++){
		if(xb[i][0]=='m'){
			sz[k]=sg[i];
			k++;
		}else{
			ns[j]=sg[i];
			j++;
		}
	}
    for(t=1;t<=k;t++){
        double e;
		for(i=0;i<k-t;i++){
			if(sz[i] > sz[i+1]){
				e = sz[i+1];
				sz[i+1] = sz[i];
				sz[i] = e;
			}
		}
	}
	printf("%.2lf",sz[0]);
	for(i=1;i<k;i++){
		printf(" %.2lf",sz[i]);
	}
	for(t=1;t<=j;t++){
        double e;
		for(i=0;i<j-t;i++){
			if(ns[i] < ns[i+1]){
				e = ns[i+1];
				ns[i+1] = ns[i];
				ns[i] = e;
			}
		}
	}
	for(i=0;i<j;i++){
		printf(" %.2lf",ns[i]);
	}
	return 0;
}
