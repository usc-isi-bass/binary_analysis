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
	int n,p;
	scanf("%d",&n);
	if(n!=1){
	 for(;;){
		if(n%2==0){
			p=n/2;
			printf("%d/2=%d\n",n,p);
			n=p;
			if(n==1){
				break;
			}
		}
		else{
			p=n*3+1;
			printf("%d*3+1=%d\n",n,p);
			n=p;
			if(n==1){
				break;
			}
		}
	 }
	}
		printf("End");
		return 0;
	}	