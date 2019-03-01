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

int main (){
	int N;
	scanf("%d",&N);
	int sz[500];
	for(int i=0;i<N;i++){
		scanf("%d",&sz[i]);
	}
	int e;
	int j;
	for(int p=1;p<=N;p++){
	   for(j=0;j<N-p;j++){
	    	if(sz[j]>sz[j+1]){
		    	e=sz[j+1];
			    sz[j+1]=sz[j];
			    sz[j]=e;
			}
	   }
	}
	int js[500];
	int t=0;  
	j=0;
	while(j<N){
		if(sz[j]%2!=0){
			js[t]=sz[j];
		    t++;
		}
		j++;
	}
	for(int q=0;q<t;q++){
		if(q<t-1){
			printf("%d,",js[q]);
		}else{
		    printf("%d",js[q]);
		}
	}
	return 0;
}
	