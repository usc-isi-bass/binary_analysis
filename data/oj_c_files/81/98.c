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

int hanshu(int x,int y);
int main(){
	int x[5][5],n,m,i,e,c,j,a;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&x[i][j]);
		}
	}
	scanf("%d %d",&n,&m); 
	c=hanshu(n,m);
	if(c==0){
		printf("error");
	}
	else{
		for(i=0;i<5;i++){
			e=x[n][i];
			x[n][i]=x[m][i];
			x[m][i]=e;
		}
		for(a=0;a<5;a++){
		for(j=0;j<5;j++){
			if(j<4){
			printf("%d ",x[a][j]);
			}
			else{
				printf("%d",x[a][j]);
			}
		}
		printf("\n");
	}
	}
	return 0;
}
int hanshu(int x,int y){
	int result; 
	if(x>=0&&x<=4&&y<=4&&y>=0){
		result=1;
	}
	else{
		result=0;
	}
	return result;
}
