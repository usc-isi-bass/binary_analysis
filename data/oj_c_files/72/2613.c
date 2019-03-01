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
    int m,n ;
    
    int sz[1000][1000];
    scanf("%d%d",&m,&n);
    for(int i=0;i<n+2;i++){sz[0][i]=0;}
    for(int i=1;i<m+1;i++){
        for(int a=1;a<n+1;a++){
            scanf("%d",&sz[i][a]);
        }
    }
    for(int i=0;i<m+2;i++){sz[i][0]=0;}
    for(int i=0;i<m+2;i++){sz[i][n+1]=0;}
    for(int i=0;i<n+2;i++){sz[m+1][i]=0;}
    for(int i=1;i<m+1;i++){
       for(int a=1;a<n+1;a++){
           if(sz[i][a]>=sz[i-1][a]&&sz[i][a]>=sz[i+1][a]&&sz[i][a]>=sz[i][a+1]&&sz[i][a]>=sz[i][a-1]){
            printf("%d ",i-1);
           printf("%d\n",a-1);
           }
       }
      } 
     return 0;    
}


