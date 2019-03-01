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
    int n,i,k,j;
    scanf("%d",&n);
    int a[n],c[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    int b[21];
    b[0]=0;
    b[1]=b[2]=1;
    for(i=3;i<21;i++){
       b[i]=b[i-1]+b[i-2];
       }
    for(i=0;i<n;i++){
       k=a[i];
       c[i]=b[k];
       }
    for(i=0;i<n;i++){
    printf("%d\n",c[i]);
}
    scanf("%d",&k);
    return 0;
}
