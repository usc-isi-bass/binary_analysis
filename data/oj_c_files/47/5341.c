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
    int i;
    int n;
    int buf;
    int *array;
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }
    for (i = n - 1; i >= 0; i--) {
        if (i != n - 1) {
            printf(" ");
        }
        printf("%d", *(array + i));
    }
    return 0;
}