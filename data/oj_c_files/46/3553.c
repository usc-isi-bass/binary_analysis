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
    int x[100][100];
    int row,col,i,j;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&x[i][j]);
        }
    }
    int s=0,a=row-1,b=0,c=col-1;
    while(s<=a&&b<=c){
        if(s<a&&b<c){
            for(i=b;i<c;i++){
                printf("%d\n",x[s][i]);
            }
            for(i=s;i<a;i++){
                printf("%d\n",x[i][c]);
            }
            for(i=c;i>b;i--){
                printf("%d\n",x[a][i]);
            }
            for(i=a;i>s;i--){
                printf("%d\n",x[i][b]);
            }
        }else if(s==a){
            for(i=b;i<=c;i++){
                printf("%d\n",x[s][i]);
            }
        }else{
            for(i=s;i<=a;i++){
                printf("%d\n",x[i][b]);
            }
        }
        s=s+1;
        a=a-1;
        b=b+1;
        c=c-1;
    }
    return 0;
}