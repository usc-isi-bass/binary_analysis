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

int main()
{
    int a,b,c,d,e,f,m;
    scanf("%d",&m);
    a=(m-m%100)/100;
    m=m-a*100;
    b=(m-m%50)/50;
    m=m-b*50;
    c=(m-m%20)/20;
    m=m-c*20;
    d=(m-m%10)/10;
    m=m-d*10;
    e=(m-m%5)/5;
    m=m-5*e;
    f=(m-m%1)/1;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0;
}