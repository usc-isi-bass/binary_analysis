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



int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int main(){
	int N,inA[MAXN],oddA[MAXN],M=0;
	cin>>N;
	for(int i=0;i<N;i++) cin>>inA[i];
	for(int i=0;i<N;i++){
		if(inA[i]%2){
 			oddA[M]=inA[i];
			M++;
		}
	}
	qsort(oddA,M,sizeof(int),cmp);
	for(int i=0;i<M;i++){
		cout<<oddA[i];
		if(i!=M-1) cout<<',';
	}
	return 0;
}