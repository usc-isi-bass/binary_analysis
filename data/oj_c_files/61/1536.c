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

int f(int n);
int main(){
	int n,i;
	int x;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		x=f(a[i]-1);
		printf("%d\n",x);
	}

	return 0;
}

int f(int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n>1){
		return f(n-1)+f(n-2);
	}
}
