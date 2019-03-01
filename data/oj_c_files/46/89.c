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
	int col,row,ROW,COL,n[100][100],i,b=0,N;
	scanf("%d %d",&ROW,&COL);
	N=ROW*COL;
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			scanf("%d",&n[row][col]);
		}
	}
	for(i=0;;i++){
		if(b<N){
		for(col=i,row=i;col<(COL-i);col++){
			if(b<N){
				printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		for(col=COL-1-i,row=i+1;row<ROW-i;row++){
			if(b<N){
				printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		for(row=ROW-1-i,col=COL-2-i;col>=i;col--){
			if(b<N){
				printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		for(col=i,row=ROW-2-i;row>=i+1;row--){
			if(b<N){
				printf("%d\n",n[row][col]);
				b+=1;
			}else break;
		}
		}else break;
	}
	return 0;
}
