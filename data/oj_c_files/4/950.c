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
	int shuzu[100][100];
	int i,j,k,n,row,col,shuru;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&shuru);
			shuzu[i][j]=shuru;
		}
	}
	for(k=0;k<=row+col-2;k++){
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				if(i+j==k){
					printf("%d\n",shuzu[i][j]);
				}
			}
		}
	}
	return 0;

}