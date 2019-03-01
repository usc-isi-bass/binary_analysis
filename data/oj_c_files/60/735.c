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

int zhi(int a);
int main(){
int n,i,t,k;
k=0;
scanf("%d",&n);
for(i=3;i<=n-2;i++){
	if(zhi(i)==1){
		t=i+2;
		if(zhi(t)==1){
			k++;
			printf("%d %d\n",i,t);
		}
	}
}
if(k==0){
	printf("empty\n");
}
	return 0;
}
int zhi(int a){
	int b=1;
	for(int i=2;i<a;i++){
		if(a%i==0){
			break;
		}else{
			b++;
		}
	}
	if(b==a-1){
		return 1;
	}else{
		return 0;
	}
}
