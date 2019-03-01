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
    int n;
    scanf("%d",&n);
    int a[50000],b[50000];
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    int k,e;
    for(k=1;k<=n;k++){
        for(int i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i+1];
                a[i+1]=a[i];
                a[i]=e;
                e=b[i+1];
                b[i+1]=b[i];
                b[i]=e;
            }
        }
    }
    int left,right;
    left=a[0];
    int m=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<=b[i]){
            m++;
            if(b[i]>b[i+1]){
                b[i+1]=b[i];
            }
        }
    }
    right=b[n-1];
    if(m==n-1){
        printf("%d %d",left,right);
    }
    else{
        printf("no");
    }
    return 0;
}
