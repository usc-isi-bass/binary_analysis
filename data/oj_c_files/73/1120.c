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
    int i,j,k,t,p,sz[5][5];
    p=0;
    for(i=0;i<5;i++){
       for(j=0;j<5;j++){
          scanf("%d",&sz[i][j]);
       }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            for(k=0;k<5;k++){
                t=1;
                if(k!=j&&sz[i][j]<sz[i][k]||k!=i&&sz[k][j]<sz[i][j]){
                   t=0;
                   break;
                }
             }
             if(t==1){
                   printf("%d %d %d",i+1,j+1,sz[i][j]); 
                   p=1;
             }
        }
    }
    if(p==1){
      return 0;
    }else{
      printf("not found");
    }
    return 0;
}

