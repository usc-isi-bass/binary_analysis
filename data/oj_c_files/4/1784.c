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


void main()
{
	int a[200][200];
	int i,j,row,col,sum;

	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}

	if(col>=row){
		for(sum=0;sum<col;sum++){
			for(j=sum;j>=0;j--){
				i=sum-j;
				if(i>=row) break;
				printf("%d\n",a[i][j]);
			}
		}
		for(;sum<=col+row-2;sum++){
			for(j=col-1;j>=0;j--){
				i=sum-j;
				if(i>=row) break;
				printf("%d\n",a[i][j]);
			}
		}
	}
	else{
		for(sum=0;sum<col;sum++){
			for(j=sum;j>=0;j--){
				i=sum-j;
				if(i>=row) break;
				printf("%d\n",a[i][j]);
			}
		}
		for(;sum<=col+row-2;sum++){
			for(j=col-1;j>=0;j--){
				i=sum-j;
				if(i>=row) break;
				printf("%d\n",a[i][j]);
			}
		}
	}	
}