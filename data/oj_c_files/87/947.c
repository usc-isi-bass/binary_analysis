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
    int a,b,c,d,e,f,n=0,m=0,j=0,k=0;
    while(1){
             scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
             if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
                                           break;
                                           }
 d=d+12;
    m=60-c+(60-b-1)*60;
    j=(d-a-1)*60*60;
    k=e*60+f;
    n=m+j+k;
    printf("%d\n",n);
    
                                           }
    return 0;
}
    