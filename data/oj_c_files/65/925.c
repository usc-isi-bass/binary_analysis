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
    int a,b,n,i;
    scanf("%d",&n);
    int z[n],x[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&z[i],&x[i]);
    }
    a=0;
    b=0;
    for(i=0;i<n;i++){
        if(z[i]==0&&x[i]==2){
            b++;
        }
        else if(z[i]==2&&x[i]==0){
            a++;
        }
        else if(z[i]<x[i]){
            a++;
        }
        else if(z[i]>x[i]){
            b++;
        }
    }
    if(a>b){
        printf("A");
    }
    else if(a<b){
        printf("B");
    }
    else if(a==b){
        printf("Tie");
    }
    return 0;
}
