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

int main () {
	int m,n,i,j,a,b,c,d;
	int sz[22][22]={0};
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			a=sz[i][j]-sz[i-1][j];
			b=sz[i][j]-sz[i+1][j];
			c=sz[i][j]-sz[i][j-1];
			d=sz[i][j]-sz[i][j+1];
			if(a>=0 && b>=0 && c>=0 && d>=0){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}