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

main()
{
    double a,b,c,d,s,p;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    s=(a+b+c+d)/2;
    double S;
    scanf("%lf",&p);
    p=p/2;
    p=(p/180)*3.1415926;
    double q=cos(p);
    if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(q,2))<0)
    printf("Invalid input");
    else
    {
        S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(q,2));
        printf("%.4f",S);
    }
}