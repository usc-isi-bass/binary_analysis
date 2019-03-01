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
	int n,i,j,a=3;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}

		if(j==i){
			if(i-a==2){
			printf("%d %d\n",a,i);
			};
			a=i;
		}
	}
	if(a==3){
	printf("empty");
	}
	return 0;
}