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
    int a,b,c,d,e,f,n,i;
   for(i=0;i<1000;i++){
    scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
    if(a*a+b*b+c*c+d*d+e*e+f*f!=0){
        n=(12+d-a)*3600+(e-b)*60+(f-c);
    printf("%d\n",n);
    }else{
        break;
    }
    
   }
    return 0;
}
