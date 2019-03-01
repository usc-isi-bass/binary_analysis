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

int main() {  
    int i,n,p;
    double a,b,c,d;
    n>=0&&n<=100;
    scanf("%d",&n);
    a=b=c=d=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&p);
        if(p<=18)
        a++;
        else if(p>=19&&p<=35)
        b++;
        else if(p>=36&&p<=60)
        c++;
        else if(p>=61)
        d++;
    }
    a=a/n*100;
    b=b/n*100;
    c=c/n*100;
    d=d/n*100;
    printf("1-18: %.2lf%%\n",a);
    printf("19-35: %.2lf%%\n",b);
    printf("36-60: %.2lf%%\n",c);
    printf("60??: %.2lf%%\n",d);
return 0;
    }
