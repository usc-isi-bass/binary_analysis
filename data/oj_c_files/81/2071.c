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
int sz[5][5],n,m,i,j,e;
    for(i=0;i<5;i++){
    for(j=0;j<5;j++)
    scanf("%d",&sz[i][j]);}
    scanf("%d%d",&n,&m);
    if(n<5&&m<5){
    for(j=0;j<5;j++)
    {e=sz[n][j];
     sz[n][j]=sz[m][j];
     sz[m][j]=e;}
     for(j=0;j<=3;j++)
     printf("%d ",sz[0][j]);
     printf("%d\n",sz[0][4]);
     for(j=0;j<=3;j++)
     printf("%d ",sz[1][j]);
     printf("%d\n",sz[1][4]);
     for(j=0;j<=3;j++)
     printf("%d ",sz[2][j]);
     printf("%d\n",sz[2][4]);
     for(j=0;j<=3;j++)
     printf("%d ",sz[3][j]);
     printf("%d\n",sz[3][4]);
     for(j=0;j<=3;j++)
     printf("%d ",sz[4][j]);
     printf("%d\n",sz[4][4]);
}
else printf("error");
return 0;
}
     

