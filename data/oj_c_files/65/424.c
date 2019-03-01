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
	int n,i;
	int A[200],B[200];
	int countA=0,countB=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i],&B[i]);
		if((A[i]-B[i]==-1)||(A[i]-B[i]==2)){
			countA++;
		}else if((A[i]-B[i]==1)||(A[i]-B[i]==-2)){
			countB++;
		}
	}
	if(countA>countB) {
		printf("A");
	}else if(countB>countA){
		 printf("B");
	}else {
		printf("Tie");
	}
	return 0;
}
