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
	int sz[5][25];
	int h,l;
	int e;
	int m,n;
	for(h=0;h<5;h++){
		for(l=0;l<5;l++){
			scanf("%d",&sz[h][l]);
		}
	}
	scanf("%d %d",&m,&n);
	if(m>=0&&m<=4&&n>=0&&n<=4){

	for(l=0;l<5;l++){
		e=sz[m][l];
		sz[m][l]=sz[n][l];
		sz[n][l]=e;
	}
	}
	if(m>=0&&m<=4&&n>=0&&n<=4){
		for(h=0;h<5;h++){
		for(l=0;l<5;l++){
			if(l==4){
				printf("%d\n",sz[h][l]);
			}
			else{
				printf("%d ",sz[h][l]);
			}
		}
	}
	}
	else{
		printf("error");
	}








	return 0;
}
