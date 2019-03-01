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

int main ()
{
    int w, a[13] = {0}, sum;
    int b[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> w;
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j < i; j++)
            a[i] += b[j];
        a[i] = a[i] + 13;
        if ((a[i] % 7 - 1 + w) % 7 == 5)
            cout << i << endl;
    }
    return 0;
}
