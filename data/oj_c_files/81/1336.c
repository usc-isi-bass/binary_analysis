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


int reverse(int,int);
int main(int argc, char* argv[])
{
	int sz[5][5],n,m,i,j,e[5];

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&m,&n);

	if(reverse(n,m)==0){
		printf("error\n");
	}else{
		for(j=0;j<5;j++){
		e[j]=sz[n][j];
		sz[n][j]=sz[m][j];
		sz[m][j]=e[j];
		}
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				printf("%d ",sz[i][j]);
			}
			if(j==4){
				printf("%d",sz[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}

int reverse(int n,int m){
	
	if(n>=0&&n<5&&m>=0&&m<5){
		return 1;
	}else{
		return 0;
	}

}