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

    int factor(int n,int min){
    int result=1,i;
    if(n<min){
              return 0;}
    for(i=min;i<n;i++){
                       if(n%i==0){
                                  result=result+factor(n/i,i);
                                  }
                                  }
                       return result;
                       }
    int main(){
        int n,a[100000],b[100000];
        scanf("%d",&n);
        for(int j=0;j<=n-1;j++){
                scanf("%d",&a[j]);
                b[j]=factor(a[j],2);
                printf("%d\n",b[j]);
                }
                return 0;}
