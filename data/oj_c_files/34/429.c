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

int jiaogu(int q){
	if(q%2!=0){
		printf("%d*3+1=%d\n",q,q*3+1);
		q=q*3+1;
	}
    else	if(q%2==0){
		printf("%d/2=%d\n",q,q/2);
		q=q/2;
	}         
	return q;
}

int main () {
	int i,n;
	scanf("%d",&n);
	if (n!=1){
	for (i=0;;i++){
		n=jiaogu(n);
		if(n==1){
			break;
		}
	}
	}
	printf("End");
	return 0;
}
