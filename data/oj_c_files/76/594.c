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

int main()
{
    int n,k,e,f,a[max],b[max];
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%d %d\n",&(a[i]),&(b[i]));
    }
    for(k=1;k<=n;k++){
        for(i=1;i<=n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
            }
            if(b[i]>b[i+1]){
                f=b[i];
                b[i]=b[i+1];
                b[i+1]=f;
            }
        }
    }
    int h;
    h=1;
    for(i=1;i<n;i++){
        if(b[i]<a[i+1]){
            h=0;
        }
    }
    if(h==1){
                printf("%d %d",a[1],b[n]);
    }else{
            printf("no");
    }
    return 0;
}


