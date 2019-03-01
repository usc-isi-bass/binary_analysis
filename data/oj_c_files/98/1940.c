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
    int max = 80;
    int i, n, len;
    int end = 0;   /* ????????????? */
    char word[80];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", word);
        len = strlen(word);
        /* ?????????????????????
           ???80????????? */
        if (end + len + 1 > 80) {
            printf("\n");
            end = 0;
        }
        else {
            /* ?????????????????? */
            if (i > 0) {
                printf(" ");
                end++;
            }
        }
        printf("%s", word);
        end += len;
    }
    return 0;
}