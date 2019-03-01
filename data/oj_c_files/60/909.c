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

int sushu(int x);
int main(){
	int n,i,s[10000],k=0;
	scanf("%d",&n);
	for(i=3;i<=n;i++){
		if(sushu(i)){
			s[k]=i;
			k++;
		}
	}
	if(k==1){
		printf("empty");
	}else{
	for(i=0;i<k-1;i++){
		if(s[i+1]-s[i]==2){
			printf("%d %d\n",s[i],s[i+1]);
		}
	}
	}
	return 0;
}
int sushu(int x){
	int j;
	for(j=2;j<x;j++){
		if(x%j==0){
			return 0;
		}
	}
	return 1;
}