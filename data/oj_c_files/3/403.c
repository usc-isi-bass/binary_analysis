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
	int m,n,i,k,result,mark=0,j=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}for(i=0;i<n;i++){
		for(k=1;k<n-i;k++){
			result=sz[i]+sz[i+k];
			if(result==m&&j==0){
				printf("yes");
				j++;
			mark=1;
			}
		}
	}if(mark==0){
		printf("no");
	}return 0;
}
