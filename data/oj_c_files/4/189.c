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



int main()
{
	int row,col,i,j,ji;
	int su[100][100];
	int h=0,l=0,sum,shibie;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&su[i][j]);
		}
	}
	ji=row*col;
	while(ji!=0){
		for(sum=0;sum<(row+col-1);sum++){
			if(sum<col){
				l=sum;
				h=0;
			}else{
				h=sum-col+1;
				l=col-1;
			}
			do{
			printf("%d\n",su[h][l]);
			ji--;
			l--;
			h++;
			}while((l>=0)&&(h<row));		
		}
	}
	return 0;
}
