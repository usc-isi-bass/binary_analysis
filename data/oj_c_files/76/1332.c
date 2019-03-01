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
    int m=1,e,n,a[10000],b[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d\n",&a[i],&b[i]);
    }
    for(int i=0;i<n-1;i++){
       for(int k=i+1;k<n;k++){
           if(a[i]>a[k]){
               e=a[i];
               a[i]=a[k];
               a[k]=e;
           }
           if(b[i]>b[k]){
               e=b[i];
               b[i]=b[k];
               b[k]=e;
           }
       }
    }
    for(int i=0;i<n-1;i++){
        if(b[i]<a[i+1]){
            m=0;
        }
    }
    if(m==0){
        printf("no");
    }
    else{
        printf("%d %d",a[0],b[n-1]);
    }
    return 0;
}
