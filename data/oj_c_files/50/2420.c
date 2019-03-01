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
    int w,m,d,a;
    w=0;
    m=1;
    d=0;
    a=1;
    scanf("%d",&w);
    w=w-1;
    d=d+13;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+31;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+28;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+31;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+30;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+31;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+30;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+31;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+31;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+30;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+31;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
    d=d+30;
    m=m+1;
    a=(d-(d/7)*7+w);
    if(a==5) printf("%d\n",m);
    if(a==12) printf("%d\n",m);
}
