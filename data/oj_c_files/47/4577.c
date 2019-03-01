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
	int sz[100];
	int t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n/2;i++){
		t=sz[i];
		sz[i]=sz[n-i-1];
		sz[n-i-1]=t;
	}
	for(i=0;i<n;i++){
		if(i<=n-2){
		printf("%d ",sz[i]);
		}else{
		printf("%d",sz[i]);
		}
	}
	return 0;
}