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
	int n,b,i,k;
	k=13;
	scanf("%d",&n);
	if(n==1){
		b=5;
	}
if(n==2){
		b=4;
	}
if(n==3){
		b=3;
	}
if(n==4){
		b=2;
	}
if(n==5){
		b=1;
	}
if(n==6){
		b=0;
	}
if(n==7){
		b=6;
	}
	for(i=1;i<=12;i++){
		if(k%7==b){
			printf("%d\n",i);
		}
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			k+=31;
	   }
		else if(i==4||i==6||i==9||i==11){
			k+=30;
		}
		else{
			k+=28;
		}
	}

	return 0;
}
