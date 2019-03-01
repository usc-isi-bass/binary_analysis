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
	int sz[100][100];
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(j=0;j<m;j++){
		for(k=0;;k++){
			if(k>=n||j-k<0){
				break;
			}
			else{
				printf("%d\n",sz[k][j-k]);
			}
		}
	}
	for(i=1;i<n;i++){
		for(k=0;;k++){
			if(i+k>n-1||m-1-k<0)
				break;
			else
				printf("%d\n",sz[i+k][m-1-k]);
		}
	}
	return 0;
}
