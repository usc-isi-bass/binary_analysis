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
	int k[100][100];
	int m=0,x=0,i,j,row=0,col=0;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&k[i][j]);
		}
	}
	for(m=0;m<row+col-1;m++){
		for(j=m;;j--){
			if(j>=col||m-j>=row){
				break;
			}
			if(j<0||m-j<0){
				break;
			}
			printf("%d\n",k[m-j][j]);
		}
	}
    for(m=col;m<row+col-1;m++){
		for(j=col-1;j>=0;j--){
			if(m-j>=row){
				break;
			}
			printf("%d\n",k[m-j][j]);
		}
	}
	return 0;
}
