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

int main() {
	int n,m,i,k,a,b,c;
	int sz[5][5];
	int ss[5];
	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			scanf("%d",&sz[i][k]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n<5&&n>=0&&m>=0&&m<5){
		for(a=0;a<5;a++){
			ss[a]=sz[n][a];
			sz[n][a]=sz[m][a];
			sz[m][a]=ss[a];
		}
		for(b=0;b<5;b++){
			for(c=0;c<4;c++){
				printf("%d ",sz[b][c]);
			}
			printf("%d\n",sz[b][4]);
		}
	}else {
		printf("error");
	}
	return 0;
}
