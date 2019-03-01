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


void deal(int n)
{
     double a, b;
     a = 2.0;
     b = 1.0;
     double sum;
     sum = 0.0;
     int i;
     for(i = 0; i < n; i ++)
     {
           sum += a / b;
           double t;
           t = a;
           a = a + b;
           b = t;
     }
     printf("%.3lf\n", sum);
}
int main()
{
    int m;
    scanf("%d", &m);
    int i;
    for(i = 0; i < m; i ++)
    {
          int n;
          scanf("%d", &n);
          deal(n);
    }
    return 0;
}

