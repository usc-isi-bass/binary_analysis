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
    int a,b,c,d,e,f;
    int t;
    int i;
    for(i=0;i<=1000;i++){
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
        break;
    }
    else{
    t=0;
    if(c<=f){
        t=t+f-c;
    }
    else{
        e=e-1;
        f=f+60;
        t=t+f-c;
    }
    if(b<=e){
        t=t+((e-b)*60);
    }
    else{
        d=d-1;
        e=e+60;
        t=t+((e-b)*60);
    }
    d=d+12;
    t=t+((d-a)*3600);
    printf("%d\n",t);
    }
    }
    return 0;
}
