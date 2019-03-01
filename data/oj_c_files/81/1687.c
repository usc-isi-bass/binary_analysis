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
    int n,m,i,j,k;
    int jz[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            scanf("%d",&jz[i][j]);
        }scanf("%d\n",&jz[i][4]);
    }
    scanf("%d%d",&n,&m);
        if(n>4||m>4){
            printf("error");
        }else{
    if(n>m){k=n;n=m;m=k;}
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){printf("%d ",jz[i][j]);
        }printf("%d\n",jz[i][4]);}
    for(j=0;j<4;j++){printf("%d ",jz[m][j]);
    }printf("%d\n",jz[m][4]);
    for(i=n+1;i<m;i++){
        for(j=0;j<4;j++){
            printf("%d ",jz[i][j]);
        }printf("%d\n",jz[i][4]);
    }
    for(j=0;j<4;j++){
        printf("%d ",jz[n][j]);
    }printf("%d\n",jz[n][4]);
    for(i=m+1;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d ",jz[i][j]);
        }printf("%d\n",jz[i][4]);
    }}
    return 0;
}

