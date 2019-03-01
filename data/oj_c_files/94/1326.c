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
	int N,sz[501],i=0,j=0,e,k=1,m;
	scanf("%d",&N);
	for(i=0;i<N;i++){
	scanf("%d",&sz[i]);
	}
	for(k=0;k<=N;k++){
		for(j=0;j<N;j++){
			if(sz[j]>sz[j+1]){
			e=sz[j+1];
			sz[j+1]=sz[j];
			sz[j]=e;
			}
		}
	}
	m=0;
	for(j=0;j<=N;j++){
		if(sz[j]%2==1){
			if(m==0){
				printf("%d",sz[j]);
			}else{
			printf(",%d",sz[j]);}
		m++;
		}
	}
return 0;
}