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
    double a,b,c,d,s,t,x,S;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
    s=(a+b+c+d)/2.0;
    t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x/2*2*PI/360)*cos(x/2*2*PI/360);
    if(t>=0){
        S=sqrt(t);
        printf("%.4lf",S);
    }
    if(t<0){
        printf("Invalid input");
    }
return 0;
}