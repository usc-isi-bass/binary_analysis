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

int dir[4][2]={0,1, 1,0, 0,-1, -1,0};
int k,row,col,a[200][200];

int main(){
	scanf("%d%d",&row,&col);
	for (int i=0;i<row;++i)
		for (int j=0;j<col;++j) scanf("%d",&a[i][j]);
	int k=0,i=0,j=0,i1,j1;
	while (1>0){
		printf("%d\n",a[i][j]);
		a[i][j]=-1;
		i1=i+dir[k][0];
		j1=j+dir[k][1];
		if (i1>=0 && i1<row && j1>=0 && j1<col && a[i1][j1]!=-1){
			i=i1;j=j1;
			continue;
		}
		k=(k+1)%4;
		i1=i+dir[k][0];
		j1=j+dir[k][1];
		if (i1>=0 && i1<row && j1>=0 && j1<col && a[i1][j1]!=-1){
			i=i1;j=j1;
			continue;
		}
		break;
	}
}
