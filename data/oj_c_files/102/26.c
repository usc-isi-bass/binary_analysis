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
	int i,n,j=0,l=0,k;
	float h,x[100],y[100],e;
	char a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		scanf("%f",&h);
		if(a[0]=='m'){
			x[j]=h;
			j++;}
		else{
			y[l]=h;
			l++;
		}
	}
	for(k=1;k<j;k++){
		for(i=0;i<j-k;i++){
			if(x[i]>x[i+1]){
				e=x[i+1];
				x[i+1]=x[i];
				x[i]=e;
			}
		}
	}
	for(k=1;k<l;k++){
		for(i=0;i<l-k;i++){
			if(y[i]>y[i+1]){
				e=y[i+1];
				y[i+1]=y[i];
				y[i]=e;
			}
		}
	}
	printf("%.2f",x[0]);
	for(i=1;i<j;i++){
		printf(" %.2f",x[i]);
	}
	for(i=l-1;i>=0;i--){
		printf(" %.2f",y[i]);
	}
	return 0;
}
