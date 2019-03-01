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
	int N;
	int e,i;
	int m=0;
	scanf("%d",&N);
	int sz[1000];
	for(i=0;i<N;i++){
		scanf("%d",&sz[i]);
	}
	for(int k=N-1;k>0;k--){
		for(i=0;i<k;i++){
			if(sz[i]>sz[i+1]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	for(i=0;i<N;i++){
		if(sz[i]%2!=0){
			m=i;
		}
	}
	for(i=0;i<=m;i++){
		if(sz[i]%2!=0&&i<m){
			printf("%d,",sz[i]);
		}
		if(i==m){
			printf("%d",sz[m]);
		}
	}
	
	
		

	return 0;
}





