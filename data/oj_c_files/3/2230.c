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
	int sz[1100];
	int n,k,i,j,x;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)x=sz[i]+sz[j];
			 if (x==k) break;
		}
		if(x==k)break;
	}
	
	   if(x==k) printf("yes\n");
	
	if(x!=k)
		printf("no\n");
	return 0;

}