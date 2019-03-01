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
    int a[100], num;
    int i, j;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &num);
        for (j=0; j<num; j++)
            scanf("%d", &a[j]);
        printf("%d\n", comp(a, num));
    }

    return 0;
}

int comp(int a[], int num)
{
    int i, re = 0;
    for (i=0; i<num; i++) {
        re = 3*(i+1) + a[i];
        if ((re>60) && ((re-3)<60)) /* not jump in 60 */
            return a[i];
        else if (re > 60) /* jumped in 60 */
            return 60 - 3*i;
    }
    if (re <= 60)
        return 60-3*i;
}