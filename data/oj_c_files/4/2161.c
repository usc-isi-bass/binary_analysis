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
	int i,j,row,col,shuzu[100][100],n=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&shuzu[i][j]);
		}
	}
	if(row==col){
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				printf("%d\n",shuzu[j][i-j]);
				if((i-j)==0){
					break;
				}
			}
		}
		for(i=1;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d\n",shuzu[i+j][col-1-j]);
				if((i+j+1)==row){
					break;
				}
			}
		}
	}
	if(row>col){
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				printf("%d\n",shuzu[j][i-j]);
				if((i-j)==0){
					break;
				}
			}
		}
		for(i=1;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d\n",shuzu[i+j][col-1-j]);
				if((col-1-j)==0){
					break;
				}
				if((i+j+1)==row){
					break;
				}
			}
		}
	}
	if(row<col){
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				printf("%d\n",shuzu[j][i-j]);
				if((i-j)==0){
					break;
				}
			}
		}
		for(i=1;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d\n",shuzu[i+j][col-1-j]);
				if((i+j+1)==row){
					break;
				}
			}
		}
	}
	return 0;
}
