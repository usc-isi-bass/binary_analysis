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

int divide(int m,int n,int k,int i){  //i???????????
	if((m-k)%n!=0)
		return 0;
	else{
		if(i==1)
			return m;
		else{ 
			m=(m-k)/n*(n-1);
			i--;
			return divide(m,n,k,i);
		}
	}
}
int main(){
	int m,n,k,left;
	scanf("%d%d",&n,&k);
	for(m=k;;m++){
		left=divide(m,n,k,n);
		if(left-k>=n){
			printf("%d",m);
			break;
		}
	}
	return 0;
}