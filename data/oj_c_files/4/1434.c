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
	int array[100][100],ROW,COL,i=0,k=0,j=0;
		scanf("%d%d",&ROW,&COL);
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				scanf("%d",&array[i][j]);
			}
		}
	for (k=0; k<COL; k++) {
		for (i=0, j=k; i<ROW&& j>=0; i++, j--){
            printf("%d\n",array[i][j]);
		}
	}
for (k=1; k<ROW; k++) {
	for ( i=k,  j=COL-1; i<ROW && j>=0; i++, j--){
printf("%d\n",array[i][j]);
}
}
	return 0;
}