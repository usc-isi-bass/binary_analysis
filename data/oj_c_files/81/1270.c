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

int zn(int n,int m,int sz[5][5]);
int main(){
	int sz[5][5];
	int n,m;
	int a,b;
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			scanf("%d",&sz[a][b]);
		}
	}
	scanf("%d%d",&n,&m);
	if(zn(n,m,sz)){
		for(b=0;b<5;b++){
			int e;
			e=sz[n][b];
			sz[n][b]=sz[m][b];
			sz[m][b]=e;
		}
		for(a=0;a<5;a++){
			for(b=0;b<4;b++){
				printf("%d ",sz[a][b]);
			}
			printf("%d\n",sz[a][4]);
		}
	}else{
		printf("error");
	}
	return 0;
}
int zn(int n,int m,int sz[5][5]){
	int f1=0,f2=0;
	for(int a=0;a<5;a++){
		for(int b=0;b<5;b++){
			if(sz[a][b]==n){
				f1=1;
			}
			if(sz[a][b]==m){
				f2=1;
			}
		}
	}
	if(f1==1&&f2==1&&n<5&&m<5){
		return 1;
	}else{
		return 0;
	}
}