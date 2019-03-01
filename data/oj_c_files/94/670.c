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
int N,a[max],b[max];
int m=0;
int i,j;
scanf("%d",&N);
for(i=0;i<N;i++){
	scanf("%d",&a[i]);
	if(a[i]%2!=0){
		b[m]=a[i];
		m++;
	}
}
int e;
for(int k=1;k<=m;k++){
	for(i=0;i<m-k;i++){
		if(b[i]>b[i+1]){
			e=b[i+1];
			b[i+1]=b[i];
			b[i]=e;
		}
	}
}
for(j=0;j<m;j++){
	if(j==0){
		printf("%d",b[j]);
	}else{
		printf(",%d",b[j]);
	}
}
return 0;
}