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
	int i,a=0,b=0,n,A[200],B[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i],&B[i]);
	}
	for(i=0;i<n;i++){
		if(A[i]==B[i]){
			a++;
			b++;
		}else if((A[i]-B[i]==-1)||(A[i]-B[i]==2)){
			a++;
		}else{
			b++;
		}
	}
	if(a>b){
		printf("A");
	}else if(a<b){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}