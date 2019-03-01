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
    int n,k,i,j,x[1000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
           scanf("%d",&x[i]);
    }
    
    for(j=0;j<n;j++){
            for(i=j+1;i<=n;i++){
                   if(x[j]+x[i]==k){
                          printf("yes");
                          return 0;
                   }
            }
    }
    printf("no");
    
    scanf("%d %d",&n,&k);                
    return 0;
}