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

int f(int x){
	int i,sz[1000];
	for(i=0;i<x;i++){
		if(i==0){sz[i]=1;}
		if(i==1){sz[i]=1;}
		if(i>1){
			sz[i]=sz[i-1]+sz[i-2];
		}
	}
	return sz[x-1];
}
int main(){
	int n,y,m[1000],h[1000];
	scanf("%d",&n);
	for(y=0;y<n;y++){
		scanf("%d",&m[y]);
		h[y]=f(m[y]);
	}for(y=0;y<n;y++){
		printf("%d\n",h[y]);
	}
	return 0;
}