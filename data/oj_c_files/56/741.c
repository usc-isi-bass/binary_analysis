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


int main(int argc, char * argv[]) 
{ 
    int m,a,b,c,d,e,p,x,y;
    scanf("%d",&m);
    a=m/10000;
    b=m%10000/1000;
    c=m%1000/100;
    d=m%100/10;
    e=m%10;
    p=e*10000+d*1000+c*100+b*10+a;
    x=(10-a)/10;
    y=1-x;
    p=p/10*x+p*y;
    x=(10-b)/10;
    y=1-x;
    p=p/10*x+p*y;
    x=(10-c)/10;
    y=1-x;
    p=p/10*x+p*y;
    x=(10-d)/10;
    y=1-x;
    p=p/10*x+p*y;
    printf("%d",p);
}


