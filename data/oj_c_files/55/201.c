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
    char s[33];
    int i, a, b, n;
    long x = 0, y = 1;
    scanf("%d %s %d", &a, s, &b);
    for (i = strlen(s)-1; i >= 0; i--)
    {
        if (s[i] >= 'a')
           x += (s[i] - 'a' + 10) * y;
        else if (s[i] >= 'A')
           x += (s[i] - 'A' + 10) * y;
        else 
           x += (s[i] - '0') * y;
        y *= a;
    }
    y = 1;
    while (x / y >= b)
       y *= b;
    do
    {   
        n = x / y;
        x = x % y;
        if (n >= 10)
            printf("%c", 'A' + (n - 10));
        else
            printf("%d", n);
        y = y / b;
    }
    while (y >= 1);
    return 0;
}