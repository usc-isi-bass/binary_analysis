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


int F(int n){
    int m,i,j,s=1;
    m=sqrt(n);
    for(i=2;i<=m;i++){
        for(j=m;j<=n;j++){
            if(n==i*j){
                s=0;
                return 1;
                break;
            }
        }
    }
    if(s==1) return 2;
}

int main()
{
    int t,k,p;
    scanf("%d",&t);
    for(k=3;k<=t/2;k++){
        if(F(k)==2){
            p=t-k;
            if(F(p)==2){
                printf("%d %d\n",k,p);
            }
        }
    }
    return 0;
}