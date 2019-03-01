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

int judge(int x){
	int i;
	if(x%2==0) return 0;
	for(i=3;i<=sqrt(x);i+=2){
		if(x%i==0) return 0;
	}
	return 1;
}

void main(){
	int i,n,k=0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++){
		if(judge(i)==1&&judge(i+2)==1){
			printf("%d %d\n",i,i+2);
			k++;
		}
	}
	if(k==0) printf("empty\n");
}