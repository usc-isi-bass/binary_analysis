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
    int i;
    double a[4],c,s,S,l;
    for(i=0;i<4;i++)
    {
       scanf("%lf",&a[i]);
    }
    scanf("%lf",&c);
    c=c*PI/180;
    s=(a[0]+a[1]+a[2]+a[3])/2;
    l=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*cos(c/2)*cos(c/2);
    if(l<0)
       printf("Invalid input\n");
    else
    {
       S=sqrt(l); 
       printf("%.4lf\n",S);
    }
}
