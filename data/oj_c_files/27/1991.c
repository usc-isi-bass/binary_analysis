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
    double a, b, c, delta, x1, x2;
    int n;
    scanf("%d", &n );
    while( n-- ) {
        scanf("%lf %lf %lf", &a, &b, &c );
        delta = b * b - 4 * a * c;
        if( delta < 0 ) {
            delta = sqrt(-delta) / 2 / a;
            printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n", -b/2/a, delta, -b/2/a, -delta );
        } else if( delta > 0 ){
            delta = sqrt(delta)/2/a;
            printf("x1=%.5lf;x2=%.5lf\n", -b/2/a+delta, -b/2/a-delta );
        } else {
            printf("x1=x2=%.5lf\n", -b/a/2 );
        }
    }
}