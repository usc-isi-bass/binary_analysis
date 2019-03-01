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
    int n;
    int i;
    int buf;
    int appeared[110] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &buf);
        if (!appeared[buf]) {
            if (i != 0) {
                printf(" ");
            }
            printf("%d", buf);
            appeared[buf] = 1;
        }
    }
    return 0;
}