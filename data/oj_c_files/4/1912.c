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
    int i, j, k;
    int row, col;
    int matrix[100*100];
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", matrix + i*100 + j);
        }
    }
    for (i = 0; i < col; i++) {
        for (j = i, k = 0; j >= 0 && k < row; j--, k++) {
            printf("%d\n", *(matrix + k*100 + j));
        }
    }
    for (i = 1; i < row; i++) {
        for (j = col - 1, k = i; j >= 0 && k < row; j--, k++) {
            printf("%d\n", *(matrix + k*100 + j));
        }
    }
    return 0;
}