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
    int an[30][30];
	int m,n,i,j;
	char x;
	x=' ';
	scanf("%d%d",&m,&n);
	for(i=0;i<30;i++){
		for(j=0;j<30;j++)
			an[i][j]=0;
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++)
			scanf("%d",&an[i][j]);
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(an[i][j]>=an[i-1][j]&&an[i][j]>=an[i+1][j]&&an[i][j]>=an[i][j-1]&&an[i][j]>=an[i][j+1])
				printf("%d%c%d\n",i-1,x,j-1);
		}
	}
	return 0;
}
	