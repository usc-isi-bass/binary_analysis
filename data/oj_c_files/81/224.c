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

int F(int n,int m);
int main(){
	int n,m,r,i;
	int jz[5][5];
	for(i=0;i<5;i++){
		for(r=0;r<5;r++){
			scanf("%d",&jz[i][r]);
		}
	}
	scanf("%d %d",&n,&m);
	if(F(n,m)){
		for(i=0;i<5;i++){
			r=jz[m][i];
			jz[m][i]=jz[n][i];
			jz[n][i]=r;
		}
		for(i=0;i<5;i++){
			for(r=0;r<4;r++){
				printf("%d ",jz[i][r]);
			}
			printf("%d\n",jz[i][4]);
		}
	}
	else
		printf("error");
	return 0;
}
int F(int n,int m){
	if(n>=0&&n<5&&m>=0&&m<5)
		return 1;
	else
		return 0;
}