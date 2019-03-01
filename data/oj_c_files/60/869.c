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

int zhishu(int n){
	int m=0;
	for(int i=2;i<n;i++){
		if(n%i==0)
			m++;
	}
	if(m==0&&n!=1){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n,m=0;
	scanf("%d",&n);
	for(int i=1;i<=n-2;i++){
		if(zhishu(i)&&zhishu(i+2)){
			printf("%d %d\n",i,i+2);
			m++;
		}
	}
	if(m==0){
		printf("empty\n");
	}
    return 0;
}