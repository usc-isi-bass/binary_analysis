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


int isprime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int ishuiwen(int n)
{
    int i, len;
    char a[11];
    sprintf(a, "%d", n);
    len = strlen(a);
    for (i = 0; i < len/2; i++)
    {
        if (a[i] != a[len-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    int count = 0, i, m, n;
    scanf("%d%d", &m, &n);
    for (i=m; i<=n; i++)
    {
        if (isprime(i) && ishuiwen(i))
        {
            count++;
            if (count == 1)
                printf("%d", i);
            else
                printf(",%d",i);
        }
    }
    if (count == 0)
        printf("no");
    return 0;
}
