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
    int m,n,i,j,e;
    double sum[100],a,b,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a=2;
        b=1;
        sum[i]=0;
        scanf("%d",&m);
        for(j=1;j<=m;j++){
                          t=a/b;
                          sum[i]+=t;
                          e=a;
                          a=a+b;
                          b=e;
                          }
                          }
    for(i=0;i<n;i++){
        if(i==n-1){
                 printf("%.3lf",sum[i]);
                 }else{
                       printf("%.3lf\n",sum[i]);
                       }
                       }
   return 0;
}