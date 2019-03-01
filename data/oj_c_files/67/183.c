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
	int n,i,j,sz[1000],sx[1000];
	scanf("%d",&n);
	double sum;
	for(i=0;i<n;i++){
		scanf("%d %d",&sz[i],&sx[i]);
		

	}
	for(j=1;j<n;j++){
		if(((double)sx[j]/(double)sz[j]-(double)sx[0]/(double)sz[0])>0.05){
			printf("better\n");
		}
		else if(((double)sx[0]/(double)sz[0]-(double)sx[j]/(double)sz[j])>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}
  