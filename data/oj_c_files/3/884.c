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
	int n,k,i,j,f=0,s=0,a[10000];
	scanf("%d%d",&n,&k);
	for(i=1;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(f==0){
		 for(j=0;j<i;j++){
			if(a[i]+a[j]==k){
				printf("yes\n");
				f=1;
				s=1;
				break;
			}
		 }
		}
	}
	if(s==0){
		printf("no\n");
	}
	return 0;
}