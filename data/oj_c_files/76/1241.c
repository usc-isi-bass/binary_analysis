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
	int a[50000],b[50000];
	int n,i,r=0,k,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(k=0;k<n-1;k++){
		for(i=n-1;i>k;i--){
			if(a[i]<a[i-1]){
				x=a[i];
				a[i]=a[i-1];
				a[i-1]=x;
				x=b[i];
				b[i]=b[i-1];
				b[i-1]=x;
			}
		}
	}
	for(i=0;i<n-1;i++){
		if(b[i]<a[i+1]){
			r++;
		}
		if(b[i]>=b[i+1]){
			x=b[i];
			b[i]=b[i+1];
			b[i+1]=x;
		}
	}
	if(r!=0){
		printf("no");
	}else{
		printf("%d %d",a[0],b[n-1]);
	}
	return 0;
}
