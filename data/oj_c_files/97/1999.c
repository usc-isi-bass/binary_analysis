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
    int x,a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&x);
    a=x/100;
    b=x%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,c,e,g,i,k);
    scanf("%d",&a);
    return 0;
}
