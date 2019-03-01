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


int main(){

	int sz[100];
	int i,n;
	int e;

	scanf("%d",&n);

	scanf("%d",&sz[0]);

	for(i=1;i<n;i++){
	  scanf(" %d",&sz[i]);
	}

	if(n%2==0){
		for(i=0;i<n/2;i++){
			e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-1-i]=e;
		}
	}else{

		for(i=0;i<(n-1)/2;i++){
		    e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-1-i]=e;
		}
	}

    printf("%d",sz[0]);

	for(i=1;i<n;i++){
	  printf(" %d",sz[i]);
	}
	return 0;
}
