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

int ss(int x);
int main(){
	int n,j,a,b,c=0;
	scanf("%d",&n);
	for(j=3;j<n-1;j+=2){
		a=ss(j);
		b=ss(j+2);
		if(a>0&&b>0){
			printf("%d %d\n",j,j+2);
			c++;
		}
	}
	if(c==0){
		printf("empty");
	}

  	return 0;
}
int ss(int x){
	int result=0;	
	int i;
	for(i=2;i<x;i++){

		if(x%i==0){
			result*=0;
			break;
		
		}else{
			result+=1;
		}
	}	
	return result;
}