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
    int t,i,j,n,p,max;
    int a[1000],b[1000];
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d%d",&(a[i]),&(b[i]));
    }
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            if (a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
                t=b[j];b[j]=b[j+1];b[j+1]=t;
            }
        }
    } max=b[1]; p=1;
    for (i=2;i<=n;i++){
        if (a[i]<=max){
            if (b[i]>max){max=b[i];}    
        }else {p=0;break;}
    }
    if (max<b[n]){max=b[n];}
    if (p==0){
        printf("no");
    }else{printf("%d %d",a[1],max);}
    return 0;
}

