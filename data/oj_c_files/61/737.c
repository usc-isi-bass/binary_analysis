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
    int n,a=1,b=1,sz[20],i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(i=0;i<n;i++){
        if(sz[i]<=2){
            b=1;
            printf("%d\n",b);
        }
        else{
            for(j=0;j<sz[i]-2;j++){
                c=b;
                b=a+b;
                a=c;
            }
            printf("%d\n",b);
        }
        a=1;
        b=1;
    }
    return 0;

}