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



int apple(int n, int k)
{
    if(n==2)
        return 2*pow(n,n)-(n-1)*k;
    else
        return pow(n,n)-(n-1)*k;
}

int main()
{
    int n,k;

    scanf("%d %d", &n, &k);
    printf("%d\n", apple(n,k));

    return 0;
}