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
	int sz[8][8];
	int i,k,row;
	char a;
	int ROW,COL,m=0,n=0,j=0;
	scanf("%d%c%d",&ROW,&a,&COL);
	for(i=0;i<ROW;i++){
		for(k=0;k<COL;k++){
			scanf("%d",&sz[i][k]);
		}
	}
	for(row=0;row<ROW;row++){
		for(k=0;k<COL;k++){
			 

			if(sz[row][m]<sz[row][k]){
               m=k;
			}
		}
			for(i=0;i<ROW;i++){
				if(sz[n][m]>sz[i][m]){
					n=i;
				}
			}
				if(row==n){
					printf("%d+%d",row,m);
					j++;
				}
				}
	if(j==0){
		printf("No\n");
	}
	return 0;
}
	