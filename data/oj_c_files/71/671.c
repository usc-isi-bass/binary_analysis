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


int leap(int a)
{
    if (((a % 4 == 0) && (a % 100 != 0)) || a % 400 == 0) return 1;
    else return 0;
}

int bigger(int a, int b)
{
    if (a >= b) return a;
    else return b;
}

int main()
{
    int n, year, month1, month2, big, small, countdays;
    int days[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                       {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> year >> month1 >> month2;
        big = bigger(month1, month2);
        small = month1 + month2 - big;
        countdays = 0;
        for (int j = small - 1; j < big - 1; j++)
        {
            countdays += days[leap(year)][j];
        }
        if (countdays % 7 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
