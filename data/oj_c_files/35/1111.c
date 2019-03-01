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
	int row,col,sz[8][8],m,n,i,j,p=0;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d",&sz[i][j]);
	}
	for(i=0;i<row;i++){
                  m=0;
		if(p==1) break;
		for(j=1;j<col;j++){
			if(sz[i][j]>sz[i][j-1]) m=j;
			else sz[i][j]=sz[i][j-1];
		}
		for(n=0;n<row;n++){
			if(sz[n][m]>=sz[i][m]){
				if(n==(row-1)){
					printf("%d+%d",i,m);
					p++;
					break;
				}
			}else break;
		}
	}if(p==0){
		printf("No");
	}
	return 0;
}