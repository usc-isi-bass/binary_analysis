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
	int n,e;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
    int *js=(int*)malloc(sizeof(int)*n);
	int p=0;
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
		
		if((sz[i]%2)==1){
			js[p]=sz[i];
			
			p++;

		}
	}

	for(int w=1;w<p;w++){
		for(int h=0;h<(p-w);h++){
			if(js[h]>js[h+1]){
				e=js[h+1];
				js[h+1]=js[h];
				js[h]=e;
			}
		}
	}
	for(int y=0;y<(p);y++){
		if(y<p-1){
			printf("%d,",js[y]);
		}else{
			printf("%d",js[y]);
		}
	}
	
	return 0;
}