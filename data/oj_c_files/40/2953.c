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

//struct
main()
{
    float a,b,c,d,e;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    double r;
    r=e/360*3.1415926;
    float s,S;
    s = (a+b+c+d)/2;
    double w;
    w=cos(r);
    if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*w*w)>=0)
    {
        S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*w*w);
    printf("%.4f",S);
    }
    else
    printf("Invalid input");

}
