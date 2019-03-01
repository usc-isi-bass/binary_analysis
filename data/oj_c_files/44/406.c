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

int reverse(int u){
	int a[33]={0};
	int j,k;
	int x=0;
	for(j=0;u>0;j++){
		a[j]=u%10; 

		u=u/10;
	}
	for(k=0;k<j;k++){

		x=x*10+a[k];
	}
	return x;
}


int main(){
	int n,b;
	int i;
	for(i=0;i<6;i++){
		scanf("%d",&n);
		if(i!=0){
			printf("\n");
		}
		if(n<0){
			printf("-");
			n=-n;
		}
		b=reverse(n);
		printf("%d",b);
	}
	return 0;
}
