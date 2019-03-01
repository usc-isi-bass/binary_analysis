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
    int a,b,c,d,e,f,g=0;
    int i,j,x,n,y;

    while(1){
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a<1) break;
    i=b*60+c;
    j=e*60+f;
    x=(d+12-a)*3600-i+j;
    printf("%d\n",x);
    }
    return 0;
}
