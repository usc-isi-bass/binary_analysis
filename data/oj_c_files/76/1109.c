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
	int a[50000],b[50000],c[10002],d[10000];
	int i,n,j,k=0,l=1;
	scanf("%d",&n);
	for(i=0;i<10002;i++){
		c[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		for(j=a[i];j<b[i];j++){
			c[j]=1;
		}
	}
	for(i=0;i<10001;i++){
		if(c[i]==c[i+1]){
			continue;
		}
		if(c[i]!=c[i+1]){
			k++;
			d[l]=i;
			d[l+1]=i+1;
			l=l+2;
		}
	}
	if(k==2){
		printf("%d %d",d[2],d[3]+1);
	}else{
			printf("no");
	}
	return 0;
}
