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
	scanf("%d",&n);
	if(n==1){
		printf("End");
		return 0;
	}
	int i;
	for(i=1;;i++){
		if(n==1){
			printf("End");
			break;
		}
		if(n%2!=0){
			printf("%d*3+1=",n);
			n=3*n+1;
			printf("%d\n",n);
		}
		else {
			printf("%d/2=",n);
			n=n/2;
			printf("%d\n",n);
		}
	}
return 0;
}