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
	int n, k, sz[MAX];
	scanf("%d%d", &n, &k);
	for( int i = 0; i < n; i++){
		scanf("%d", &sz[i]);
	}
	int sum, out_put = 0;
	for( int j = 0; j < n - 1; j++){
		for( int m = j + 1; m < n; m++){
			sum = sz[j] + sz[m];
			if(sum == k){
				out_put = 1;
				break;
			}
		}
		if(out_put == 1){
			break;
		}
	}
	if(out_put == 1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}