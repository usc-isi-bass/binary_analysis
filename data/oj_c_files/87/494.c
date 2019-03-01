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
    int a=1,b=1,c=1,d=1,e=1,f=1,shijian=0;
    for( ; ; ){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0)){
        break;
    }
        d+=12;
        shijian=(f-c)+(e-b)*60+(d-a)*60*60;
        printf("%d\n",shijian);
    }
    return 0;
}