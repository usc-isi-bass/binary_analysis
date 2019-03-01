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
	int sz[5][5],hang,lie;
	int row,col,min,i,j;

	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			scanf("%d",&sz[row][col]);
		}
	}
	i=0;
	for(col=0;col<5;col++){
		min=sz[0][col];
		lie=col;
		for(row=0;row<5;row++){
			if(sz[row][col]<=min){
				min=sz[row][col];
				hang=row;
			}
		}
		j=0;
		col=0;
		while(col<5){
			if(min>=sz[hang][col]){
				j++;
			}
			col++;
		}
		if(j==5){
			printf("%d %d %d\n",hang+1,lie+1,min);
			i++;
		}
		col=lie;

	}
	if(i==0){
		printf("not found");
	}

	return 0;
}