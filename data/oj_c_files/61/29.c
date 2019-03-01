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

int value(int a){
	int p=1,q=1,i,result;
	if(a>=3){
		for(i=3;i<=a;i++){
			result=p+q;
			p=q;
			q=result;
		}
	}else{
		result=1;
	}
	return result;
}
int main(){
	int a,i,n,result;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		result=value(a);
		printf("%d\n",result);
	}
	return 0;
}