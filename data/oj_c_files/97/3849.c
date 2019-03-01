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
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&a);
    b=a%100;
    c=b%50;
    d=c%20;
    e=d%10;
    f=e%5;
    g=(a-b)/100;
    h=(b-c)/50;
    i=(c-d)/20;
    j=(d-e)/10;
    k=(e-f)/5;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",g,h,i,j,k,f);
    return 0;
}