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

int F(int n);

int main(){
	int a,n[20],r=0,m[20],i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<a;i++){
		m[i]=F(n[i]);
		printf("%d\n",m[i]);
	}
	return 0;
}

		
int F(int n){
	int a=1,b=1,j,r;
	if(n==1){
		r=1;
	}
	if(n==2){
		r=1;
	}
	for(j=2;j<n;j++){
		
		r=a+b;
		a=b;
		b=r;
		
	}
	return r;
}



