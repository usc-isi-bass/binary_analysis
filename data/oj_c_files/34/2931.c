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
	int n,i,d;
	scanf("%d",&n);
	for(i=0;i>=0;i++){
		if(n==1){
			printf("End\n");
			break;
		}
		else if(n%2!=0){
			d=n*3+1;
			printf("%d*3+1=%d\n",n,d);
		}
		else if(n%2==0){
			d=n/2;
			printf("%d/2=%d\n",n,d);
		}
		n=d;
	}
	return 0;
}