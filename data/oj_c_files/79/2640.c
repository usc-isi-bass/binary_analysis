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
    int m,n,i,a[MAX],count,p;
    while(scanf("%d%d",&n,&m)!=EOF){
        if(m==0&&n==0)
        break;
        for(i=0;i<n;i++){
            a[i]=1;
        }
        count=0;
        p=-1;
        while(count!=(n-1)){
            for(i=0;i<m;){
                p++;
                if(a[p%n]!=0)
                i++;
            }
            a[p%n]=0;
            count++;
        }
        for(i=0;i<n;i++)
        if(a[i]!=0)
        break;
        printf("%d\n",i+1);
    }
    return 0;
}
