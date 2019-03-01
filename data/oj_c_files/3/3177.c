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
	int n,k,i,j,a,e,m;
	int sz[1000];
	scanf("%d",&n);
        scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	a=0;
	for(i=0;i<n-1;i++){
		e=sz[i];
		for(j=i+1;j<n;j++){
			m=sz[j]+e;
			if(m==k){
				a=1;
			}
			if(a==1) 
				break;
		}
	}
	if(a==0){
		printf("no");
	}
	if(a==1){
		printf("yes");
	}
	return 0;
}
