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

int  Fibonacci (int x);
int main(){
	int i,n,p[30];
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){  
	printf("%d\n",Fibonacci (p[i]));
	}
	return 0;
}

int  Fibonacci (int x){
	int i,p,q,m,result;
	p=1;
	q=1;
	if(x==1){
		result=p;
	}
	else if(x==2){
	result=q;
	}
	else if(x>2){
		for(i=3;i<=x;i++){
		m=p+q;
		p=q;
		q=m;
		}
		result=q;
	}
	return result;
}
