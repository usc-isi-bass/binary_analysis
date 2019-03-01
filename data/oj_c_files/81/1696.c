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
    int sz[5][5];
    
    for(int a=0;a<5;a++){
        for(int b=0;b<5;b++){
            scanf("%d",&sz[a][b]);
        }
    }
    int m,n,e;
    scanf("%d %d",&m,&n);
    if(m<=4&&m>=0&&n<=4&&n>=0){
        for(int b=0;b<5;b++){
           e=sz[n][b];
            sz[n][b]=sz[m][b];
            sz[m][b]=e;
        }
        for(int a=0;a<5;a++){
            for(int b=0;b<4;b++){
                printf("%d ",sz[a][b]);
            }
                printf("%d\n",sz[a][4]);
            }
        }
    else{printf("error");}
    return 0;
}
