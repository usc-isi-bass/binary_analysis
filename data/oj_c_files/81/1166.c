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

int sushu(int a);
int main(){
	int m,n,i,j,sz[5][5];
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if(m>4||m<0||n>4||n<0){
		printf("error");
	}
	else{
		for(i=0;i<=4;i++){
			j=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=j;
		}
		for(i=0;i<=4;i++){
			for(j=0;j<=4;j++){
				if(j!=4){
					printf("%d ",sz[i][j]);
				}
				if(j==4){
					printf("%d\n",sz[i][j]);
				}
			}
		}
	}
	scanf("%d",&m);
	return 0;
}