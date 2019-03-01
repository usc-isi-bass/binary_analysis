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
	int sz[5][5];
	int n,m,x,y,i=0,j=0;
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
			scanf("%d",&sz[x][y]);
		}
	}
	scanf("%d%d",&n,&m);
	if(n>-1&&n<5&&m>-1&&m<5){
		for(y=0;y<5;y++){
			int e;
			e=sz[n][y];
			sz[n][y]=sz[m][y];
			sz[m][y]=e;
		}
		for(x=0;x<5;x++){
			for(y=0;y<5;y++){
				if(y!=4)
					printf("%d ",sz[x][y]);
				else
					printf("%d\n",sz[x][y]);
			}
		}
		return 1;
	}
	else{
		printf("error");
		return 0;

	}
}