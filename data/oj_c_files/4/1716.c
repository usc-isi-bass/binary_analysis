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
	int array[100][100];
	int row;
	int col;
	int i;
	int j;
	int t;

	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&array[i][j]);
		}
	}

	for(t=0;t<col;t++){
		for(i=0;i<row;i++){
			j=t-i;
			if(j<0){
				break;
			}
		    printf("%d\n",array[i][j]);
		}
	}
	
	for(t=col;t<=col+row-2;t++){
		for(j=col-1;;j--){
			i=t-j;
			if(j<0){
				break;
			}
			if(i>=row){
				break;
			}
			printf("%d\n",array[i][j]);
		}
	}

	return 0;
}
