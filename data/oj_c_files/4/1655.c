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

int ROW,COL;
int row=-1,col=1;
int array[100][100];
int move(){
	row++;
	col--;
	printf("%d\n",array[row][col]);
	return 0;
}
int big_move(){
	if(row+col<COL-1){
		col=row+col+1;
		row=0;
	}
	else{
		row=row+col-COL+2;
		col=COL-1;
	}
	printf("%d\n",array[row][col]);
	return 0;
}
int main(){
	scanf("%d%d",&ROW,&COL);
	int r,c;
	for(r=0;r<ROW;r++){
		for(c=0;c<COL;c++){
			scanf("%d",&array[r][c]);
		}
	}
	if (ROW==1&&COL==1){
		printf("%d",array[0][0]);
		return 0;
	}
	while(row!=ROW-1||col!=COL-1){
		while(col!=0&&row!=ROW-1)
			move();
		big_move();
	}
	return 0;
}