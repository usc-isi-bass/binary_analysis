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
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/1000;
    b=n/100-10*a;
    c=n/10-10*b-100*a;
    d=n-10*c-100*b-1000*a;
    if(a==0&&b==0&&c==0)printf("%d",d);
    if(a==0&&b==0&&c!=0){printf("%d",d);printf("%d",c);}
    if(a==0&&b!=0){printf("%d",d);printf("%d",c);printf("%d",b);}
    if(a!=0){printf("%d",d);printf("%d",c);printf("%d",b);printf("%d",a);}
    return 0;
} 