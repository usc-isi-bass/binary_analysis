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

int main()
{
	int n,i;
	scanf("%d",&n);
	int sz[100];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int e;
	for(int k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			e=sz[i];
			sz[i]=sz[i+1];
			sz[i+1]=e;
		}
	}
	for(i=0;i<n;i++){
	    if(i==0){
		printf("%d",sz[i]);
	}
	else{
		printf(" %d",sz[i]);
	}
	}
	return 0;
}