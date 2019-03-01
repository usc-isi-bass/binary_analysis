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


int step(int k)
{
    if (k == 1) {
        return 0;
    } else if (k % 2 == 0) {
        k /= 2;
        printf("%d/2=%d\n", k * 2, k);
    } else {
        k = k * 3 + 1;
        printf("%d*3+1=%d\n", (k - 1) / 3, k);
    }
    return step(k);
}

int main()
{
    int n;
    scanf("%d", &n);
    step(n);
    printf("End");
    return 0;
}