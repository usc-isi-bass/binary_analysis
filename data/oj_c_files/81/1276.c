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
	int sz[5][5],a,b,m,n,i,zs[5];
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			scanf("%d ",&sz[a][b]);
		}
	}
	scanf("%d %d",&m,&n);
	if(0<=m&&m<=4&&0<=n&&n<5){
		i=0;
	}else{
		printf("error");
	}
	if(i==0){
		for(a=0;a<5;a++){
			zs[a]=sz[m][a];
			sz[m][a]=sz[n][a];
			sz[n][a]=zs[a];
		}for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			if(b==0){
				printf("%d",sz[a][b]);
			}else{
				printf(" %d",sz[a][b]);
			}
		}
		printf("\n");
	}

	}
	
	return 0;
}
