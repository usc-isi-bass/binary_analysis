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
    int N,n,i,e,m=0;
    int sz[500];
    scanf("%d",&N);
    for(i=0;i<N;i++){
             scanf("%d ",&sz[i]);
             if(sz[i]%2!=0){
                    m=m+1;
                    sz[m-1]=sz[i];  
             }    
    }
    for(n=1;n<=m;n++){
             for(i=0;i<m-n;i++){
                    if(sz[i]>sz[i+1]){
                           e=sz[i+1];
                           sz[i+1]=sz[i];
                           sz[i]=e;
                     }
             }
    }        
    for(i=0;i<m;i++){
             if(i!=m-1){
                    printf("%d,",sz[i]) ;
             }else{
                    printf("%d",sz[i]);
             }
    }
    return 0;
}


