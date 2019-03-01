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

int m;

int f(int x) {
    // pick the last monkey.
    if (x == 1)
        return 1;
    // who's kicked off?
    int k = m % x;
    if (k == 0)
    {
        // kick off the n-th monkey, so it is exactly f(x-1)
        return f(x-1);
    } else {
        int t = f(x-1);
        if (t <= x - k)
            return k + t;
        else
            return t - (x-k);
    }

}
int main() {
    int n;
    while (true) {
        scanf("%d%d", &n, &m);
        if (n == 0) break;
        printf("%d\n", f(n));
    }
}







