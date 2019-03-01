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


int main() {
    int n; scanf("%d", &n);
    int i, count = 0, a, b;
    for (i = 0; i < n; ++ i) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 1)
            count ++;
        else if (a == 0 && b == 2)
            count --;
        else if (a == 1 && b == 0)
            count --;
        else if (a == 1 && b == 2)
            count ++;
        else if (a == 2 && b == 0)
            count ++;
        else if (a == 2 && b == 1)
            count --;
    }
    if (count > 0) printf("A\n");
    else if (count < 0) printf("B\n");
    else printf("Tie\n");
    return 0;
}
