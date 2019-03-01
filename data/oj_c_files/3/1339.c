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
    int n,k,i,m;
    scanf("%d %d",&n,&k);
    int sz[n];
    for(i=0;i<n;i++){
            scanf("%d ",&sz[i]);
    }
    for(i=0;i<n-1;i++){
            for(m=i+1;m<n;m++){
                   if(sz[i]+sz[m]==k){
                             printf("yes");
                             break;
                   }
                   if(i==n-2&&m==n-1){
                             printf("no");
                             break;
                   }
            }
            if(sz[i]+sz[m]==k){
                             break;
            } 
            if(i==n-2&&m==n-1){
                             break;
            }
      
    }
    return 0;
}

            
            
