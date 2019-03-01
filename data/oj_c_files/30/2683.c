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

int seven(int x){
	if(x%7==0){
		return 1;		
	}
	if(x%10==7){
		return 1;		
	}
	if(x-x%10==70){
		return 1;		
	}
	return 0;
}
int main(){
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(seven(i)==0)
			sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}