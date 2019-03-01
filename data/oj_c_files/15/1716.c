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

int main(int argc, char* argv[])
{
	int row,col,n,s=0;
	int sz[1000][1000];
	int star1,star2,end1,end2;
	int f=-1;
	scanf("%d",&n);
	
	for(row=0;row<n;row++){
		for(col=0;col<n;col++){
			scanf("%d",&(sz[row][col]));
		}
	}
	for(row=1;row<n-1;row++){
		for(col=1;col<n-1;col++){
			if(sz[row][col]==0&&f==-1){
				star1=row;
				star2=col;
				f=1;
			}
			if(sz[row][col]==0){
                end1=row;
				end2=col;
			}
		}
	}
     s=(end1-star1-1)*(end2-star2-1);

	printf("%d\n",s);
	return 0;
}

