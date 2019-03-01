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
    char s1[256], s2[256];
    int c[256], a, b, i, l1, l2, n, j, l;

    scanf("%d", &n);
    for (j = 0; j < n; j++) {
        l = 0;
        memset(c, 0, sizeof(c));
        scanf("%s%s", s1, s2);

        // ??????????
        l1 = (int)strlen(s1);
        l2 = (int)strlen(s2);

        while (l1 > 0 || l2 > 0) {
            // ?????????
            a = (l1 > 0) ? s1[--l1] - '0' : 0;
            b = (l2 > 0) ? s2[--l2] - '0' : 0;
            // ????????????????
            // ????????????????????
            c[l] += a - b;
            c[l + 1] = (c[l] - 9) / 10;
            c[l] = (c[l] + 10) % 10;
            l++;
        }

        // ??????????????????
        while (c[l] == 0 && l > 0)
            l--;
        for (i = l; i >= 0; i--)
            printf("%d", c[i]);
        printf("\n");
       }
return 0;
}