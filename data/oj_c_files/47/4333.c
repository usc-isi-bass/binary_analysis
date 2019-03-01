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
    int n,e,i,k;
    scanf("%d\n",&n);
    int sz[n];
    e=0;
    while(e<n){
        scanf("%d",&sz[e]);
        e=e+1;
    }
    if(n%2==0){
        e=0;
        k=n/2;
        while(e<k){
            i=sz[e];
            sz[e]=sz[n-e-1];
            sz[n-e-1]=i;
            e=e+1;
        }
        e=0;
        while(e<n-1){
            printf("%d ",sz[e]);
            e=e+1;
        }
        printf("%d",sz[n-1]);
    }else if(n%2==1){
        e=0;
        k=n-1;
        k=k/2;
        while(e<k){
            i=sz[e];
            sz[e]=sz[n-e-1];
            sz[n-e-1]=i;
            e=e+1;
        }
        e=0;
        while(e<n-1){
            printf("%d ",sz[e]);
            e=e+1;
        }
        printf("%d",sz[n-1]);
    }
    return 0;
}
