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
	int n,i,e,f;
	scanf("%d",&n);
	if(n==1){
		printf("End");
	}else{
		e=n;
		for(i=0;i<10000;i++){
			if(e%2!=0&&e!=1){
				f=e;
				e=e*3+1;
				printf("%d*3+1=%d\n",f,e);
			}else{
				f=e;
				e=e/2;
				printf("%d/2=%d\n",f,e);
			}
			if(e==1){
				printf("End");
				break;
			}
		}
	}
return 0;
}
