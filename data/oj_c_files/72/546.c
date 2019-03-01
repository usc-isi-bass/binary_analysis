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
 	int m,n;
 	int sz[ROW][COL];
 	int row,col;
	scanf("%d %d",&m,&n);
 	for(row=0;row<m;row++){
			for(col=0;col<n;col++){
				scanf("%d",&sz[row][col]);
				}
			}
	for(row=0;row<m;row++){
		for(col=0;col<n;col++){
			if(row==0&&col==0){
				if(sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col+1]){
					printf("%d %d\n",row,col);
					}
				}
			else if(row==0&&col==n-1){
				if(sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]){
					printf("%d %d\n",row,col);
					}
				}
			else if(row==m-1&&col==0){
				if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col+1]){
					printf("%d %d\n",row,col);
					}
				}
			else if(row==m-1&&col==n-1){
				if(sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row-1][col]){
					printf("%d %d\n",row,col);
					}
				}
			else if(row==0){
				if(sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]){
					printf("%d %d\n",row,col);
					}
				}
			else if(row==m-1){
				if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]){
				    printf("%d %d\n",row,col);
				    }
				}
			else if(col==0){
				if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col+1]){
					printf("%d %d\n",row,col);
					}
				}
			else if(col==n-1){
				if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]){
					printf("%d %d\n",row,col);
					}
				}
			else if(row!=0&&row!=m-1&&col!=0&&col!=n-1){
			if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]){
				printf("%d %d\n",row,col);
				}
		    }
			}
		}
	
 	
    return 0;
}