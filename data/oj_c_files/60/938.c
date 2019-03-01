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
	int n,i,k,a;
	a=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i++){
		for(k=2;k<=i;k++){
			if(i%k==0){
				break;
			}
		}
		if(k==i){
			for(k=2;k<=i+2;k++){
				if((i+2)%k==0){
					break;
				}
			}
			if(k==i+2){
				a=1;
				printf("%d %d\n",i,i+2);
			}
		}
	}
	if(a==0){
		printf("empty");
	}
	return 0;
}