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


int N,K;
int dfs(int n){
	if (n == 0) {
		return N-1;
	}
	int m = dfs(n-1)/(N-1)*N+K;
	if (n == N) {
		return m;
	}
	while (m%(N-1)) {
		m += (int)pow(N,n);
	}
	return m;
}
int main(){
	scanf("%d%d",&N,&K);
	printf("%d",dfs(N));
	return 0;
}