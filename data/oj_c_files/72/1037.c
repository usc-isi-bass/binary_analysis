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
int sz[255][255];
int m,n,a,i,j,row,col;
a=0;
scanf("%d %d",&m,&n);
for(row=0;row<m;row++){
	for(col=0;col<n;col++){
		scanf("%d",&sz[row][col]);
	}
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(sz[i][j]-sz[i][j+1]>=0&&sz[i][j]-sz[i][j-1]>=0&&sz[i][j]-sz[i-1][j]>=0&&sz[i][j]-sz[i+1][j]>=0)
		printf("%d %d\n",i,j);
	}
}


return 0;
}