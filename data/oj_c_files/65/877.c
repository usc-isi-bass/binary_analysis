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
    int  i,n,j,k=0,m=0;
    int   sz[200][2];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
    scanf("%d",&(sz[i][j]));
     }
    }
    for(i=0;i<n;i++){
        if((sz[i][0]-sz[i][1]==-1)||(sz[i][0]-sz[i][1]==2)) {k++;}
        else if((sz[i][0]-sz[i][1]==1)||(sz[i][0]-sz[i][1]==-2)) {m++;}
        else if(sz[i][0]-sz[i][1]==0){k=k+1;m=m+1;}
    }
    if(k>m) {printf("A");}
    else if(k<m) {printf("B");}
   else if(k==m) {printf("Tie");}
    return 0;
}

