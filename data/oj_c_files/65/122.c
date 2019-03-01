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
    int n,i,s=0,t=0;
    scanf("%d",&n);
    int a[300],b[300];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            s=s;t=t;
        }
        if(a[i]==0&&b[i]==1){
            s=s+1;t=t;
        }
        if(a[i]==0&&b[i]==2){
            s=s;t=t+1;
        }
        if(a[i]==1&&b[i]==0){
            s=s;t=t+1;
        }
        if(a[i]==1&&b[i]==2){
            s=s+1;t=t;
        }
        if(a[i]==2&&b[i]==0){
            s=s+1;t=t;
        }
        if(a[i]==2&&b[i]==1){
            s=s;t=t+1;
        }
    }
    if(s==t){
        printf("Tie");
    }
    if(s>t){
        printf("A");
    }
    if(s<t){
        printf("B");
    }
    return 0;
}
