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
    int a[A],b[B];
    char c;
    int i,n,g,k,h;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d%d\n",&(a[i]),&(b[i]));
    }
    for(k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
           if(a[i]>a[i+1]){
           g=a[i];
           h=b[i];
           a[i]=a[i+1];
           b[i]=b[i+1];
           a[i+1]=g;
           b[i+1]=h;
           } 
        }
    }
    h=b[0];
    for(i=0;i<n-1;i++){
        if(b[i+1]<=h){
            c='y';
    }else if(a[i+1]<=h){
        h=b[i+1];
        c='y';
    }else{
        c='n';
    }
}
if(c=='n'){
    printf("no");
}else{
    printf("%d %d",a[0],h);
}
return 0;
}
