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
	int n,sum;
	scanf("%d",&n);
	sum=n;
	if(n==1){
	printf("End");
	}
	while(n!=1){
		if(n%2==0){
			sum/=2;
			printf("%d/2=%d\n",n,sum);
			n=sum;
		}else{
			sum=3*n+1;
			printf("%d*3+1=%d\n",n,sum);
			n=sum;
		}
		if(sum==1){
			printf("End");
			break;
		}
	}
	return 0;
}