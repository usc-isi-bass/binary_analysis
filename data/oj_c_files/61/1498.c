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

int w(int n);
int main(){
	int m,n,sz[100],i;
	scanf("%d",&m);
    for(i=1;i<=m;i++){
		scanf("%d",&n);
	    printf("%d\n",w(n));
	}
	return 0;
}
int w(int n){
	int i,sz[100];	
	sz[0]=0;
	sz[1]=1;
	if(n==0||n==1){
		return sz[n];
	}else{
        for(i=1;i<n+1;i++){
			sz[i+1]=sz[i]+sz[i-1];
		}
	}
	return sz[n];
}