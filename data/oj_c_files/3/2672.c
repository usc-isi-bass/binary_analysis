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
	int n,k,i,j,t=0;
	int sz[1000][1000];
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d",&sz[0][i]);
		sz[i][0]=sz[0][i];
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				continue;
			}else{
				sz[i][j]=sz[i][0]+sz[0][j];
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(sz[i][j]==k){
				t=1;
			}
		}
	}
	if(t==1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
