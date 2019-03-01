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
    int m,n,i,k,N=100;
    double a[N],b;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&n);
        a[0]=1.0;a[1]=2.0;b=0;
        for(k=2;k<=n+1;k++){
            a[k]=a[k-1]+a[k-2];
            b=b+(a[k-1]/a[k-2]);
        }
        printf("%.3lf\n",b);
    }
    return 0;
}