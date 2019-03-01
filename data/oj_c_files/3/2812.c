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
    int n,sz[1000],k,s,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(((sz[i]+sz[j])==k)&&(i!=j)){
                s=s+1;
            }
        }
    }
   if(s>0){
        printf("yes\n");
    }
        if(s==0){
        printf("no\n");
    }
    return 0;
}





