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

int array[5][5];
int scan(int N,int M);
void main(){
	int n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&array[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(scan(n,m)==1){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%d",array[i][j]);
				if(j!=4){
					printf(" ");
				}
			}
			if(i!=4){
				printf("\n");
			}
		}
	}
	else if(scan(n,m)==0){
		printf("error\n");
	}
}

int scan(int N,int M){	
	int i,temp[5];
	if((N>=0)&&(N<5)&&(M>=0)&&(M<5)){
		for(i=0;i<5;i++){
			temp[i]=array[N][i];
			array[N][i]=array[M][i];
			array[M][i]=temp[i];
		}
		return 1;
	}
	else {
		return 0;
	}
}