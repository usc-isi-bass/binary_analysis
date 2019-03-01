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
    int a1, b1, a2, b2;
    int n, t, area;
    int s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &t);
            if (t == 0) {
                if (s == 0) {
                    a1 = i;
                    b1 = j;
                    s = 1;
                }
                a2 = i;
                b2 = j;
            }
        }

    area = (a2 - a1 - 1) * (b2 - b1 - 1);
    printf("%d", area);
    return 0;
}
