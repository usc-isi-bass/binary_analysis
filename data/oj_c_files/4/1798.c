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


int main(int argc, char* argv[])
{
	int col,row,sz[99][99],i,j;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<col;i++){
		for(j=0;j<=i&&j<row;j++){
			printf("%d\n",sz[j][i-j]);
		}
	}
	for(i=1;i<row;i++){
		for(j=0;j+i<row&&j<col;j++){
			printf("%d\n",sz[i+j][col-j-1]);
		}
	}
	return 0;
}