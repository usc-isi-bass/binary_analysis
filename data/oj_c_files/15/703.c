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
	int n,a[1000][1000],b[1000][1000],row,col,ROW1,COL1,ROW2,COL2,sum;
		scanf("%d",&n);
		for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				scanf("%d",&a[row][col]);
			}
		}
	for(row=0;row<n;row++){
			for(col=0;col<n;col++){
				if(a[row][col]==0){
				ROW1=row;
				COL1=col;
					break;
				}
			}
		}
for(row=n-1;row>=0;row--){
			for(col=n-1;col>=0;col--){
				if(a[row][col]==0){
					ROW2=row;
					COL2=col;
					break;
				}
			}
		}
sum=(ROW2-ROW1+1)*(COL1-COL2+1);

printf("%d",sum);

	return 0;
}

