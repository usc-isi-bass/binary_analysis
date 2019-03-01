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
	int m,n;
	scanf("%d%d",&m,&n);
	int shan[m+2][n+2];
        for(int i=0;i<=m+1;i++){
		for(int j=0;j<=n+1;j++){
			shan[i][j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&shan[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if((shan[i][j]>=shan[i-1][j])&&(shan[i][j]>=shan[i][j-1])&&(shan[i][j]>=shan[i+1][j])&&(shan[i][j]>=shan[i][j+1])){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;

}