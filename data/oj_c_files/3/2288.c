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
	int x[MAX],sum[MAX][MAX];
	int i,j,k,n;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum[i][j]=x[i]+x[j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sum[i][j]==k&&i!=j){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}