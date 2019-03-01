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
    int n, m, i;
    scanf("%d",&n);
    for(i=0;;){
        if(n==1){
            printf("End");
            break;
        }
        if(n%2!=0){
            m=n*3+1;
            printf("%d*3+1=%d\n",n,m);
            i=n;
            n=m;
            m=i;
        }
        if(n%2==0){
            m=n/2;
            printf("%d/2=%d\n",n,m);
            i=n;
            n=m;
            m=i;
        }
    }
    return 0;
}