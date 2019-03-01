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

int f(int k);
int main(){
	int s[1000],i,n,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&s[i]);
		k=s[i];
		printf("%d\n",f(k));
	}
	return 0;
}
int f(int k){
	if(k==1||k==2){
		return 1;
	}else{
		return f(k-1)+f(k-2);
	}
}