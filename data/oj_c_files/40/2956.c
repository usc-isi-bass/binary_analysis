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

int main ()
{
    float a,b,c,d,k,s,x;
    int e;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%d",&e);
    k=(float)e*pi/180;
    k=k/2;
    s=a+b+c+d;
    s=s/2;
    x=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(k)*cos(k);
    if (x<0) printf("Invalid input\n");
    else printf("%.4f\n",sqrt(x));
    return 0;
}
