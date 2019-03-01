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
	int n,m,sz[1000],k,i,j,s,t;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	m=n*(n-1);
	int*h
		=(int*)malloc(sizeof(int)*m);
	s=0;
	t=0;
	for(i=0;i<n;i++){
		for(j=0;j<n&&j!=i;j++){
			h[s]=sz[i]+sz[j];
			s++;
		}
	}
	for(i=0;i<s;i++){
		if(h[i]==k){
			t++;	
		}
	}
	if(t==0){
		printf("no");
	}else{
		printf("yes");
	}
	free(h);
return 0;
}