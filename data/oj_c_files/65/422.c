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
	scanf("%d",&n);
	int sz[234][2];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int k,l;
	k=0;
	l=0;

	for(i=0;i<n;i++){
		if(sz[i][0]==0){
			if(sz[i][1]==1){
				k++;
			}
			if(sz[i][1]==2){
				l++;
			}
		}else if(sz[i][0]==1){
			if(sz[i][1]==0){
				l++;
			}
			if(sz[i][1]==2){
				k++;
			}
		}else{
			if(sz[i][1]==0){
				k++;
			}
			if(sz[i][1]==1){
				l++;
			}
		}
	}
	if(k>l){
		printf("A");
	}else if(k<l){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}
