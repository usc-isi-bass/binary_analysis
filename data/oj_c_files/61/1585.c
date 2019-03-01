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

int F(int n);
int main(){
	int n;
	int bb[20],sl[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&bb[i]);
		sl[i]=F(bb[i]);
		printf("%d\n",sl[i]);
	}
	return 0;
}


int F(int n){
	int result;
	int sz[10000];
	    sz[0]=1,sz[1]=1;
	for(int r=2;r<10000;r++){
		sz[r]=sz[r-1]+sz[r-2];
	}
	for(int y=0;y<10000;y++){
		if(n==y+1){
			result=sz[y];
			break;
		}

	}
	return result;
}

