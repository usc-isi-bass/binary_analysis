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
    int n, i, t, m1, m2;

    // ???????????????????????????
    m1 = m2 = ~((unsigned)-1 >> 1);

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t > m1) {        // ???? 1)
            m2 = m1;
            m1 = t;
        }

    }
    printf("%d\n%d", m1, m2);

    return 0;
}