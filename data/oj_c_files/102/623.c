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

void px(double *sz,int n);
int main(){
	char s[10];
	double hehe;
	double b[40];
	double g[40];
	int by=0;
	int gl=0;
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s %lf",s,&hehe);
		if(strcmp(s,"female")==0){
			g[gl]=hehe;
			gl++;
		}else{
			b[by]=hehe;
			by++;
		}
	}
	px(b,by);
	px(g,gl);
	printf("%.2lf",b[0]);
	for(i=1;i<by;i++){
		printf(" %.2lf",b[i]);
	}
	for(i=gl-1;i>=0;i--){
		printf(" %.2lf",g[i]);
	}
	return 0;
}
void px(double *sz,int n){
	int i,k;
	for(k=1;k<=n;k++){
		for(i=0;i<=n-k-1;i++){
			if(sz[i]>=sz[i+1]){
				double ex;
				ex=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=ex;
			}
		}
	}
}