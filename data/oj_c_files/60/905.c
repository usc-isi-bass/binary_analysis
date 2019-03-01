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
	int n,m;
	int i,j;
	int k=0;
	scanf("%d",&n);
	int*sushu=(int*)malloc(sizeof(int)*n);
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			sushu[k]=i;
			k++;                                       
		}
	}
	for(i=0;i<=k;i++){
		if(sushu[i+1]-sushu[i]==2){
			printf("%d %d\n",sushu[i],sushu[i+1]);
			m=1;
		}
	}
	if(m!=1){
		printf("empty");
	}
	free(sushu);
	return 0;
}