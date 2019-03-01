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
	int row,col,Row,Col,sum;
	int array[100][100];
	scanf("%d%d",&row,&col);
	sum=row*col;
	//sum??
	for(Row=0;Row<row;Row++){
		for(Col=0;Col<col;Col++){
			scanf("%d",&array[Row][Col]);
		}
	}
	//??????
	Row=0;Col=-1;
	int r,c;
	row--;
	while(1){
		for(c=0;c<col;c++){
			Col++;
			printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		col--;
		//??
		for(r=0;r<row;r++){
			Row++;
			printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		row--;
		//??
		for(c=0;c<col;c++){
			Col--;
			printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		col--;
		//??
		for(r=0;r<row;r++){
			Row--;
			printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		row--;
		//??
	}
	return 0;
}
