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


int sz[1000][1000];

int main()
{
	int i=0,n,s,rrr[5000],ccc[5000];
	scanf("%d",&n);
	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++){
			scanf("%d",&sz[row][col]);
			if(sz[row][col]==0){
				rrr[i]=row;
				ccc[i]=col;
				i++;
			}
		}
	}
	s=(rrr[i-1]-rrr[0]-1)*(ccc[i-1]-ccc[0]-1);
	printf("%d",s);
	return 0;
}
