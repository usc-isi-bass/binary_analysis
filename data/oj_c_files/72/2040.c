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
    scanf("%d%d",&m,&n);
    int sz[1000][1000];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if((i!=1&&j!=1&&i!=m&&j!=n&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1])||
            (i==1&&j==1&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1])||
            (i==m&&j==n&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i-1][j])||
            (i==1&&j!=1&&j!=n&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i+1][j])||
            (i==m&&j!=1&&j!=n&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j])||
            (j==1&&i!=1&&i!=m&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1])||
            (j==n&&i!=1&&i!=m&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j-1])||
            (i==1&&j==n&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i+1][j])||
            (i==m&&j==1&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j+1])){
                printf("%d %d\n",i-1,j-1);
            }
}
}
return 0;
}


