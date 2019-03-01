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

int f(int n, int min){
	int i, result=1;
	if(min>n)
		return 0;
	for(i=min;i<n;i++){
		if(n%i==0){
			result+=f(n/i,i);
		}
	}
	return result;
}
	
    int main(){
	int n,a,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		t=f(a,2);
		if(i<n-1)
			printf("%d\n",t);
		else
			printf("%d",t);

	}
	return 0;
	}