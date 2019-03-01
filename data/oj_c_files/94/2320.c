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
    int n,a,b;
    scanf("%d",&n);
    int sz[n];
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int k=1;k<=n;k++){
        for(int i=0;i<n-k;i++){
            if(sz[i]>sz[i+1]){
                a=sz[i+1];
                sz[i+1]=sz[i];
                sz[i]=a;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        if(sz[i]%2!=0){
            b=i;
            break;
        }
    }
    for(int i=0;i<b;i++){
        if(sz[i]%2!=0){
            printf("%d,",sz[i]);
        }
    }
    printf("%d",sz[b]);
    return 0;
}
