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
    int a[101][101]={0};
    int x,y,h=0,i,m,n;
    scanf("%d%d",&m,&n);
    for(x=1;x<m+1;x++){
        for(y=1;y<n+1;y++){
            scanf("%d",&a[x][y]);
        }
    }
    for(x=1;x<m+1;x++){
        for(y=1;y<n+1;y++){
            if(a[x][y]>=a[x][y-1]&&a[x][y]>=a[x][y+1]&&a[x][y]>=a[x+1][y]&&a[x][y]>=a[x-1][y]){
                printf("%d %d\n",x-1,y-1);
            }
        }
    }
    return 0;
}