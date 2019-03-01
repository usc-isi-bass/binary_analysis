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


int a[10000] = {0};

int main()
{
    int n;
    int i;
    int from;
    int to;
    scanf("%d", &n);
    while (scanf("%d %d", &from, &to) && (from || to)) {
        a[from] = -1;
        if (a[to] != -1) {
            a[to] += 1;
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i] == n - 1) {
            printf("%d\n", i);
            break;
        }
    }
    if (i == n) {
        printf("NOT FOUND\n");
    }
    return 0;
}
