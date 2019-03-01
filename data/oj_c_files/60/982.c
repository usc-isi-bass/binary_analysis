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


int sushu(int a){
	int k,i;
	k=sqrt(a);
	for(i=2;i<=k;i++){
		if(a%i==0){
			break;
		}
	}
	if(i>k){
		return 1;
	}
	else return 0;
}

int main(){
	int n,i,js=0;
	scanf("%d",&n);
	int ss[100000];
	for(i=3;i+2<=n;i++){
		if(sushu(i)&&sushu(i+2)){
			printf("%d %d\n",i,i+2);
			js++;
		}
	}
	if(js==0){
		printf("empty");
	}
	return 0;
}
