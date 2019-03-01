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

int a[100000];
int main(){
	int n=0,i=0,k=0,b=0;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d\n",&a[n-1]);
	scanf("%d",&k);
	for(i=0;i<=n-1;i++){
		if(a[i]!=k){
			if(b==0){
			  printf("%d",a[i]);
			  b+=1;
		    }
		    else{
		    	printf(" %d",a[i]);
		    }
		}
	}
	printf("\n");
	return 0;
} 