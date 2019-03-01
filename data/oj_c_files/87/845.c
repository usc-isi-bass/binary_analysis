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
    int a,b,c,d,e,f,n=1000,i,t;
    for(i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){break;}
        else{
            t=(d+12-a-1)*3600+(60-b+e)*60+(0-c+f);
            printf("%d\n",t);
        }
    }
    return 0;
}

