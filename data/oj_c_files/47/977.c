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
	int n,i,e;
	e=0;
	scanf("%d",&n);
	for(i=2;i<=n+1;i++){
		scanf(" %d",&sz[i]);
		e=sz[i];
		sz[i]=sz[i-1];
		sz[i-1]=e;
	}
		for(i=n;i>=2;i--){
			printf("%d ",sz[i]);
		}
		if(i=1)

	printf("%d",sz[i]);
	
return 0;
}