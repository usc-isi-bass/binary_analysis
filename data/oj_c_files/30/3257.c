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


int is_relativeto_7(int n);

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
        if (!is_relativeto_7(i)) 
            sum += i*i;

    printf("%d", sum);
    return 0;
}

int is_relativeto_7(int n)
{
    int sh = n;
    if ((n % 7) == 0) return 1;
    do {
        if ((sh % 10) == 7) return 1;
        sh = sh / 10;
    } while (sh > 0);

    return 0;
}