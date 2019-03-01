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


int main(void)
{
    double a,b,c,d,af,s,S;
 
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&af);
 
    s=(a+b+c+d)/2;
    af=cos(af/180*3.1415926/2);
    S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*af*af;

    if(S<0)
      printf("Invalid input\n");
    else
      printf("%.4lf\n",sqrt(S));
 
    return 0;
}