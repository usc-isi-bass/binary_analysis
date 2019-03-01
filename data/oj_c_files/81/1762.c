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
    int sz[5][5],i,j,n,m,e,s;
    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        scanf("%d\n",&sz[i][j]);
    }
    }
    scanf("%d%d",&n,&m);
    if(n<=4&&m<=4){
        for(j=0;j<5;j++){
            e=sz[n][j];
            sz[n][j]=sz[m][j];
            sz[m][j]=e;
        }
        for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d ",sz[i][j]);
        }
            printf("%d\n",sz[i][4]);
    }
    }else{
        printf("error");
    }return 0;
}
