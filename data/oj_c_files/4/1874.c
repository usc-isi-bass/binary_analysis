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
	int ROW,COL,j;
	scanf("%d%d",&ROW,&COL);
	int sz[100][100];
	int row,col;
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			scanf("%d",&sz[row][col]);
		}
	}
	if(ROW==COL){
	    if(ROW==1){
		    printf("%d\n",sz[ROW-1][COL-1]);
		}
	    else{
	        for(col=0;col<COL;col++){
		        j=col;
		        row=0;
		        do{
			        printf("%d\n",sz[row][col]);
			        row++;
			        col--;
				}
		        while(col>-1);
		        col=j;
			}
	        for(row=1;row<ROW;row++){
		        j=row;
		        col=COL-1;
		        do{
			        printf("%d\n",sz[row][col]);
			        row++;
			        col--;
				}
		        while(row<ROW);
	            row=j;
			}
		}
	}
	else{
        for(col=0;col<COL-1;col++){
			j=col;
		    row=0;
            do{
				printf("%d\n",sz[row][col]);
			    row++;
		        col--;
			}
		    while((col>-1)&&(row<ROW));
		    col=j;
		}
        for(row=0;row<ROW;row++){
            j=row;
	        col=COL-1;
	        do{
				printf("%d\n",sz[row][col]);
			    row++;
		        col--;
			}
	        while((row<ROW)&&(col>-1));
			row=j;
		}
	}
	return 0;
}
