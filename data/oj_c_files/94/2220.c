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
    int n,a=0,b=0,e;
    scanf("%d",&n); 
    int sz[n-1];
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(int i=0;i<n;i++){
        if(sz[i]%2==1){
            a++;
        }
    }
    int jsz[a];
    for(int i=0;i<n;i++){
        if(sz[i]%2==1){
            jsz[b]=sz[i];
            b++;   
        }
    }
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            if(jsz[i]>jsz[j]){
                e=jsz[i];
                jsz[i]=jsz[j];
                jsz[j]=e;
            }
        }
    }
    for(int i=0;i<a;i++){
        printf("%d",jsz[i]);
        if(i!=a-1){
            printf(",");
        }
    }
    return 0;
}

