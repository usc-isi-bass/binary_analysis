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

int main(int argc, char* argv[])
{
    double a,b,c,d,x,s,S,y,m;
    double PI=3.1415926;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &x);
      s=(a+b+c+d)/2;
      y=(x * PI)/360;
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y));
    m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y);
    if(m<0)
       printf("Invalid input");  
    else 
       printf("%.4lf\n",S);
    return 0;
}