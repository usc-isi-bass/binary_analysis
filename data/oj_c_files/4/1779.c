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
	int a[101][101];
	int i,j,row,col,rowc,colc;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row+col-1;i++){
		for(j=i;j>=0;j--){
			colc=j;
			rowc=i-j;
			if(colc>=col){
				continue;
			}
			if(row>col&&rowc>=row){
				continue;
			}
			if(col>=row&&rowc==row){
				break;
			}
			printf("%d\n",a[rowc][colc]);
		}
	}
	return 0;
}