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
	int sz[100][100];
	int n,i,j,l,k;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&(sz[i][j]));
		}
	}
	for(i=1;i<=n;i++){	
		l=0;
		k=0;
		sz[i][0]=255;
		sz[i][n+1]=255;
		for(j=1;j<=n;j++){
			if((sz[i][j]-sz[i][j-1])*(sz[i][j]-sz[i][j+1])>0){
				l=j-l;
				k++;
			}
		}
		if(k==2){
		  sum+=(l-1);
		}
		  
	}
	printf("%d",sum);
	return 0;
}