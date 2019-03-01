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

int mhang(int a){
	return a+1;
}
int mlie(int a){
	return a-1;
}
int main()
{
	int sz[100][100];
	int row,col,i,j,hang=0,lie=0;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<col;i++){
		hang=0;
		lie=i;
		while(1){
			printf("%d\n",sz[hang][lie]);
			hang=mhang(hang);
			lie=mlie(lie);
			if(hang>=row||lie<0){
				break;
			}
		}
	}
	for(i=1;i<row;i++){
		hang=i;
		lie=col-1;
		while(1){
			printf("%d\n",sz[hang][lie]);
			hang=mhang(hang);
			lie=mlie(lie);
			if(hang>=row||lie<0){
				break;
			}
		}	
	}
	return 0;	
}