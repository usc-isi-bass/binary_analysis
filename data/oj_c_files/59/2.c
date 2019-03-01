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


char a[100][100];

int main()
{
    int m, n, i, j, k, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
       scanf("%s", a[i]);
       for (j = 0; j < n; j++) {
           switch (a[i][j]) {
               case '@': a[i][j] = 1; count++; break;
               case '.': a[i][j] = 0; break;
               case '#': a[i][j] = -1; break;
           }
       }
    }
    scanf("%d", &m);
    for (k = 1; k < m; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == k) {
                    if (i > 0 && a[i-1][j] == 0) {
                        a[i-1][j] = k + 1;
                        count++;
                    }
                    if (i < n-1 && a[i+1][j] == 0) {
                        a[i+1][j] = k + 1;
                        count++;
                    }
                    if (j > 0 && a[i][j-1] == 0) {
                        a[i][j-1] = k + 1;
                        count++;
                    }
                    if (j < n-1 && a[i][j+1] == 0) {
                        a[i][j+1] = k + 1;
                        count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}