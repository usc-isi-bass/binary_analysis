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
    int n,l;
    scanf("%d",&n);
    int a;
    a=(int)n/100;
    printf("%d\n",a);
    l=n-a*100;
    int b;
    b=(int)l/50;
    printf("%d\n",b);
    l=l-b*50;
    int c;
    c=(int)l/20;
    printf("%d\n",c);
    l=l-c*20;
    int d;
    d=(int)l/10;
    printf("%d\n",d);
    l=l-d*10;
    int e;
    e=(int)l/5;
    printf("%d\n",e);
    l=l-5*e;
    int f;
    f=(int)l/1;
    printf("%d\n",f);
    return 0;
}
