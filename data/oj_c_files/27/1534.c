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
    int n;
    scanf("%d", &n);
    while(n--){
        double a, b, c;
        scanf("%lf%lf%lf", &a, &b, &c);
        double d = b*b-4*a*c;
        double mid = -b/(2*a);
        double dif = sqrt(fabs(d))/(2*a);
        if(mid == 0)mid = 0;
        if(d > 0)printf("x1=%.5f;x2=%.5f\n", mid+dif, mid-dif);
        if(d == 0)printf("x1=x2=%.5f\n", mid);
        if(d < 0)printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", mid, fabs(dif), mid, fabs(dif));
    }
    return 0;
}