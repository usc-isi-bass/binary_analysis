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
	int n,a[10000],b[10000],min,max,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
		if(b[i]>max){
			max=b[i];
		}
	}
	for(double m=min;m<=max;m=m+0.5){
		for(j=0;j<n;j++){
			if(m>=a[j]&&m<=b[j]){
				break;
			}
			if(j==n-1){
				printf("no");
				return 0;
			}
		}
		if(m==max){
			printf("%d %d",min,max);
			break;
		}
	}
	return 0;
}