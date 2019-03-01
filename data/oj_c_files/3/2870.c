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
    int i,m,n,k,h,isTrue;
    scanf("%d %d",&n,&k);
    int sz[n];
    m=0,isTrue=0;
    for(i=0;i<n-1;i++){
        scanf("%d ",&sz[i]);
    }
    scanf("%d",&sz[n-1]);
    while(!(isTrue)&&m<n){
           for(i=0;i<n;i++){
       if(m==i){
           continue;
       }
       if(sz[i]+sz[m]==k){
           isTrue++;
           break;
       }
       } 
       m=m++;
    }
     if(isTrue){
         printf("yes");
          }else{
          printf("no");    
          }
          return 0;
}


