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
	int n,i,j;
	scanf("%d",&n);
	for(j=1;j<=100;j++){
		if(n%2==0){
			i=n/2;
			printf("%d/2=%d\n",n,i);
			n=i;
		}
		if(n%2==1&&n!=1){
			i=3*n+1;
			printf("%d*3+1=%d\n",n,i);
			n=i;
		}
		if(n==1){
			printf("End\n");
			break;
		}
		j=j;
	}
	return 0;
}