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
    double s,a,b,c,d,angle,S,x;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
    s = (a+b+c+d)/2; 
    x=pow(cos(angle*3.1415926/360),2);
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*x); 
    if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*x<0)
    {
       printf("Invalid input");
     }
     else     
     {
        printf("%.4lf",S);
      }
    return 0;
}