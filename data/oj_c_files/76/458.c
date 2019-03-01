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
int n,i,min,max;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
	scanf("%d %d",&(a[i]),&(b[i]));
}
min=a[0];
max=b[0];
for(i=0;i<n;i++){
	if(a[i]<min){
		min=a[i];
	}
}
for(i=0;i<n;i++){
	if(b[i]>max){
		max=b[i];
	}
}
double h;
int k=0;
for(h=min;h<=max;h=h+0.5){
	for(i=0;i<n;i++){
		if(h<=b[i]&&h>=a[i]){
			k=1;
		}
	}
		if(k==0){
			printf("no");
                        break;
		}
		if(h==max){
			printf("%d %d",min,max);
		}
		k=0;
}
	return 0;
}