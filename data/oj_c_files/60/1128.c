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

int zhi(int w);
int main(){
	int n,i;
	scanf("%d",&n);
 	
	int c=0;
	for(i=2;i<=n-2;i++){
		if(zhi(i)&&zhi(i+2)){
			printf("%d %d\n",i,i+2);
			c=1;
		}
	}
	if(c==0){
	printf("empty");
}
	return 0;
}
int zhi(int w){
	int p=2,bi=0;
	for(p=2;p<=w/2;p++){
		if(w%p==0){
			bi=1;
			break;
		}
	}
	if(bi==0){
		return 1;
	}else{
		return 0;
	}
}
