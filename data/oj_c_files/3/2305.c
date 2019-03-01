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
	int sz[1000];
	int n,k,i,t,l;
	
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	t=0;
	while(t<n){
		l=1;
		while(l<n){
			if(sz[t]+sz[l]==k){
				printf("yes");
				l++;
				break;}
			else{l++;}
		}
		
		if(sz[t]+sz[l-1]==k){
			break;}	
		t++;	
	}

	if(t==n){
		printf("no");}

return 0;
	}
	