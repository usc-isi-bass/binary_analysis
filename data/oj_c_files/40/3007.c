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
    double a[4];
    double b,s;
    for(int i=0;i<4;i++)
    scanf("%lf",&a[i]);
    scanf("%lf",&b);
    b=PI*b/180/2;
    s=0.5*(a[0]+a[1]+a[2]+a[3]);
    s=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*cos(b)*cos(b);
    if(s<0)
    printf("Invalid input");
    else
    printf("%.4lf",sqrt(s));
}
