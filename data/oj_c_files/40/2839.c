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

double f(double a,double b,double c,double d,double e)
{
    double s,S;
    e=e/180*3.1415926;
    s=(a+b+c+d)/2;
    S=(s-a)*(s-b)*(s-c)*(s-d)-(a*b*c*d*cos(e/2)*cos(e/2));
    if(S<0){return 0;}    
    else S=sqrt(S);
    return S;
    
    
    }
int main(){
    double a,b,c,d,e,S;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    S=f(a,b,c,d,e);
    if(S==0){printf("Invalid input");}
    else printf("%.4lf",S);
    return 0;
    }
