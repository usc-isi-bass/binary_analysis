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
    int n, i, j, sign,counter;
    int a[20000];
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    counter=0;
    for (i=0;i<n&&counter==0;i++) {
        sign=0;
        for (j=0;j<i;j++) {
            if (a[j]==a[i]) {
                sign=sign+1;
            }
        }
        if (sign==0) {
            printf("%d", a[i]);
            counter=counter+1;
        }
    }
    for (;i<n;i++) {
        sign=0;
        for (j=0;j<i;j++) {
            if (a[j]==a[i]) {
                sign=sign+1;
            }
        }
        if (sign==0) {
            printf(" %d", a[i]);
        }
    }

    return 0;
}