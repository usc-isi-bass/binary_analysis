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
	int n;
	int a;
	scanf("%d",&n);
	if(n==1){
		printf("End\n");
	}else if(n>1){
	while(1){
		if(n%2==0){
			a=n;
			n=a/2;
			printf("%d/2=%d\n",a,n);
			if(n==1){
				printf("End\n");
				return 0;
			}
		}else{
			a=n;
			n=a*3+1;
			printf("%d*3+1=%d\n",a,n);
			if(n==1){
				printf("End");
				return 0;
			}
		}
	}
	}
	return 0;
}

