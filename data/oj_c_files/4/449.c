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
    int sz[300][300];
	int r,c,m,i,j,n,k,a;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&sz[i][j]);

	for(i=0;i<=r+c-2;i++){
		for(j=0;;j++){
			k=i-j;
			if(k<0)
				break;
			if(j<r && k<c)
				printf("%d\n",sz[j][k]);
		}
	}
	return 0;
}
