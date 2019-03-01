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
	int n,i,t,j;
	scanf("%d",&n);
	if(n<=4){
		printf("empty");
	}
	for(i=3;i<=n-2;i++){
		t=i+2;
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			for(j=2;j<t;j++){
				if(t%j==0){
				break;
				}
			}
			if(t==j){
				printf("%d %d\n",i,t);
			}
		}
	}
	return 0;
}