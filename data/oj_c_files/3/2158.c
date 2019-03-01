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
	int n,k,i,t,e,j,h=0;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(t=0;t<n-i-1;t++){
			if(a[t]<a[t+1]){
				e=a[t+1];
				a[t+1]=a[t];
				a[t]=e;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				continue;
			}
			if(a[i]+a[j]==k){
				h++;
			}
		}
	}
	if(h==0){
		printf("no");
	}else{
		printf("yes");
	}
	return 0;
}