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
	int m=0,n=0,a=0,count=0,num=0;
	scanf("%d",&n);
	m=n;
	int *sz=(int *) malloc(sizeof(int) *n);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
		for(int t=0;t<i;t++){
			if(sz[i]==sz[t]){
				a=1;
			}
		}
		if(a==1){
			sz[i]=0;
			m--;
		}
		a=0;
	}
	for(int k=0;k<n;k++){
		if(sz[k]!=0){
			printf("%d,",sz[k]);
			count++;
			num=k;
		}
		if(count==(m-1)){
			break;
		}
	}
	for(int j=num+1;j<n;j++){
		if(sz[j]!=0){
			printf("%d",sz[j]);
			break;
		}
	}
	return 0;
}