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
    double a,b,c,d,s,e,S;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
    s=(a+b+c+d)/2;
    double x,y;
    x=e*(3.1415926)/360;
    y=cos(x);
      if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*y*y)<0)
   { printf("Invalid input");}
        else
   { S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*y*y);
    printf("%.4lf",S);}
    getchar();
    getchar();
    return 0;
}