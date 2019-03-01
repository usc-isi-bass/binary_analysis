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
	int n,a[50000],b[50000],c[10000],i,j,shi,zhong;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<10000;i++){
		c[i]=0;
	}
	j=0;
	for(i=0;i<n;i++){
		for(j=a[i];j<b[i];j++){
			c[j]=1;
		}
	}
	for(i=0;i<10000;i++){
		if(c[i]==1){
			shi=i;
			break;
		}
	}
	for(i=shi;i<10000;i++){
		if(c[i]==0){
			zhong=i;
			break;
		}
	}
	for(i=zhong;i<10000;i++){
		if(c[i]==1){
			j=1;
			break;
		}
	}
	if(j==1){
		printf("no");
	}
	else{
		printf("%d %d",shi,zhong);
	}
	return 0;
}
