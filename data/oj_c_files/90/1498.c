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

int f(int m,int n){
	if(m<0) return 0;
	if(n==1) return 1;
	return f(m,n-1)+f(m-n,n);
}

void main(){
    int m,n,t;
	scanf("%d",&t);
	while(t-->0){
		scanf("%d%d",&m,&n);
		printf("%d\n",f(m,n));
	}
}