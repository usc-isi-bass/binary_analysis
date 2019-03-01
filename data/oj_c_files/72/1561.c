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
    int m,n,i,j;
    int sz[22][22];
    scanf("%d%d",&m,&n);
    for(i=1;i<m+1;i++){
	    sz[i][0]=0;
	    sz[i][n+1]=0;
	    for(j=1;j<n+1;j++){
		    scanf("%d",&(sz[i][j]));
		}
	}
    for(j=0;j<n+2;j++){
	    sz[0][j]=0;
        sz[m+1][j]=0;
	}
    for(i=1;i<m+1;i++){
	    for(j=1;j<n+1;j++){
		    if(((sz[i][j])>=(sz[i-1][j]))&&((sz[i][j])>=(sz[i+1][j]))&&((sz[i][j])>=(sz[i][j-1]))&&((sz[i][j])>=(sz[i][j+1]))){
			    printf("%d %d\n",i-1,j-1);
			}
		}
	}
    return 0;
}
