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

int sushu(int n);
int main(){
	int n,i;
	scanf("%d",&n);
	if(n<5){
		printf("empty");
	}else{
	for(i=2;i<=n-2;i++){
		if(sushu(i)==1&&sushu(i+2)==1){
			printf("%d %d\n",i,i+2);
		}
	}
	}
		return 0;
	}

	int sushu(int x){
		int i;
		if(x==2){
			return 1;
		}else{
		for(i=2;i<x;i++){
			if(x%i==0){
				return 0;
			}
		}
		return 1;
		}
	}

