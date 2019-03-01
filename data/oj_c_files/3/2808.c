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
    int a[MAX];
    int n,k,i,j,s;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[1]+a[2];
    for(i=0;i<n;i++){
        if(s==k){
            break;
        }
        else{
        for(j=0;j<n;j++){
           s=a[i]+a[j];
           if(s==k)
           break;
           else
           s=s;
        }}
    }
    if(s==k){
        printf("yes");
    }
    else
    printf("no");
    return 0;
}
