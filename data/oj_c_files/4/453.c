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
	int row,col,a[101][101],i,j,k;
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
		scanf("%d",&a[i][j]);
	    }
	}
	for(k=2;k<=row+col;k++){
		if(k<=col+1){
			for(j=k-1;j>=1&&k-j<=row;j--){
				printf("%d\n",a[k-j][j]);                       
	    	}
		}
		if(k>col+1){
			for(j=col;j>=1&&k-j<=row;j--){
				printf("%d\n",a[k-j][j]);
	    	}
		}
	}
	scanf("%d",&row);
	return 0;
}