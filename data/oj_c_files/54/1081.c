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

void f(int n,int k){
	int m,i,e;
	for(m=n+k;;m=e+1){
		e=m;
		for(i=1;i<=n;i++){
			if((m-k)%n||m-k<n) break;
			else m-=(m-k)/n+k;
		}
		if(i==n+1){
			printf("%d\n",e);
			break;
		}
	}
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	f(n,k);
	return 0;
}