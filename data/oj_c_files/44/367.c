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

int re(int n){
	int result=0;
	if(n>0){
	   while(n>0){
		  result=result*10+n%10;
		  n/=10;
	   }
	}else if(n<0){
		n=0-n;
		while(n>0){
		  result=result*10+n%10;
		  n/=10;
	   }
	   result=0-result;
	}
	return result;
}
int main(){
	int i,z,f;
	for(i=0;i<6;i++){
		scanf("%d",&z);
		f=re(z);
		printf("%d\n",f);
	}
	return 0;
}