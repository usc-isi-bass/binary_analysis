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
	int n,i,j,max,min;
	int a[MAX],b[MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(i==0){
			min=a[i];
			max=b[i];
		}
		else{
			if(a[i]<min)
				min=a[i];
			if(b[i]>max)
				max=b[i];
		}
	}
	for(j=min;j<max;j++){
		for(i=0;i<n;i++){
			if(j+0.5>a[i]&&j+0.5<b[i])
				break;
		}
		if(i==n){
			printf("no");
			break;
		}
	}
	if(j==max)
		printf("%d %d",min,max);

}