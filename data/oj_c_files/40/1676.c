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
    double a,b,c,d,e;
    double s,S,x;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    s=(a+b+c+d)/2;
    x=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.1415926)*cos(e/360*3.1415926);
    if(x<0)  printf("Invalid input\n");
    else {
    S=sqrt(x);
    printf("%.4lf\n",S);
}
    return 0;
}