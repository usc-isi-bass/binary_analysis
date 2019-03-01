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
    double a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    e=(e/180*3.1415926)/2;
    double s,r;
    s=(a+b+c+d)/2;
    if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e)<0)
       cout<<"Invalid input";
    else{
    r=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e));
    printf("%.4lf", r);
    }
    return(0);
}
    