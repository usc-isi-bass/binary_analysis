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
	int n,k,i,j;
	int sz[10000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n-1;i++){
		scanf("%d ",&sz[i]);
	}
	if(i=n-1){
		scanf("%d",&sz[i]);
	}int r=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
		     r=1;
			break;
			}else{
		continue;
			}
		}
	}
	if(r==1){
		printf("yes");
	}else if(r==0){
		printf("no");
	}
	return 0;
}