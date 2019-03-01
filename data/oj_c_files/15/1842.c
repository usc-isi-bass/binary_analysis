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
	int n;
	int sz[500][500];
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int mincol=n,minrow=n,maxcol=0,maxrow=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0){
				if(i<mincol){
					mincol=i;
				}
				if(j<minrow){
					minrow=j;
				}
				if(i>maxcol){
					maxcol=i;
				}
				if(j>maxrow){
					maxrow=j;
				}
			}
		}
	}
	int zong;
	zong=(maxcol-mincol-1)*(maxrow-minrow-1);
	printf("%d",zong);
	return 0;
}