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
	int sz[200][2];
	int i,k;
	for(i=0;i<n;i++){
		for(k=0;k<2;k++){
			scanf("%d",&sz[i][k]);
		}
	}
	int A=0,B=0;
	for(i=0;i<n;i++){
		if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
			A=A+1;
		}
		else if(sz[i][0]==sz[i][1]){
			B=B;
		}
		else{
			B++;
		}
	}
	if(A>B){
		printf("A");
	}
	else if(A==B){
		printf("Tie");
	}
	else{
		printf("B");
	}
	return 0;
}

