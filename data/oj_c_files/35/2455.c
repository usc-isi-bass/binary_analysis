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
    int m,n,i,k,a,b,j,Y[1000],X;
    int sz[10][10];
    scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++){
        for(k=0;k<n;k++){
            scanf("%d",&sz[i][k]);
        }
    }
    X=0;
    for(i=0;i<m;i++){
        Y[i]=1;
        a=i;
        b=0;
        for(k=1;k<n;k++){
            if(sz[i][k]>sz[i][b]){
                b=k;
            }
        }
        for(j=0;j<m;j++){
            if(sz[j][b]<sz[i][b]){
                Y[i]=0;
            }
        }
        if(Y[i]==1){
            printf("%d+%d",a,b);
            X=1;
        }
    }
    if(X==0){printf("No");}
    return 0;
}
