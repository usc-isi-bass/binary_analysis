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
	int result=0;
	if(m==0||n==1)
		return 1;
	if(m<0)
		return 0;

	if(m>=n)
		result+=f(m,n-1)+f(m-n,n);
	else
		result+=f(m,n-1);

	return result;
}
	
    int main(){
	int m,n,i,t,a;
	scanf("%d",&t);

	for(i=0;i<t;i++){
		scanf("%d%d",&m,&n);
	
		a=f(m,n);
			
		if(i<t-1){
	
			printf("%d\n",a);
		}
		else
			printf("%d",a);

	}
	return 0;
	}

