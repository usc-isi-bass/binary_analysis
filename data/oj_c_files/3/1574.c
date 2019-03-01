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

int main () {
    int n,k,i,a,sum,d;
    scanf("%d%d",&n,&k);
    int *sz
    =(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
                     scanf("%d",&sz[i]);
    }
    for(i=0;i<n-1;i++){
                       a=i+1;
                       for(a;a<n;a++){
                                      sum=sz[i]+sz[a];
                                      if(sum==k){
                                                 d=1;
                                      }
                       }
    }
    if(d==1){
             printf("yes");
    }else{
          printf("no");
    }    
    free(sz);
    return 0;
}