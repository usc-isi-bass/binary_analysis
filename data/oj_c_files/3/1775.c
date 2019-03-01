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
	int n,k,c,h=0;
	scanf("%d%d",&n,&k);
	int*za=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d",&(za[i]));
	}
		for(int m=0;m<n-1;m++){
			for(c=m+1;c<n;c++){
				if(za[m]+za[c]==k){
				h++;
				}
			}
		}
		if(h>0){
			printf("yes");
		}else{
			printf("no");
		}

	free(za);
	return 0;
}