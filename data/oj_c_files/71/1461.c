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

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int is_leap_year(int y)
{
    if ((y%400==0) || (y%4==0 && y%100!=0))
        return 1;
    else
        return 0;
}
int main()
{
    int i, n, j;
    int year, m1, m2, max, min, sum;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d%d%d", &year, &m1, &m2);
        max = (m1 > m2) ? m1 : m2;
        min = (m1 < m2) ? m1 : m2;
        sum = 0;
        if (is_leap_year(year)) days[1] ++; // ???2?????
        for (j=min-1; j<max-1; j++)
            sum += days[j];
        if (sum % 7 == 0)
            printf("YES\n");
        else
            printf("NO\n");
        if (is_leap_year(year)) days[1] --; // ???2?????
}
return 0;
}
