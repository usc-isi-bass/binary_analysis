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



int f(int a, int b)
{
    int k = 0;
    if (a >= 2 * b)
    {
        for (int i = b; i <= a / b; i++)
        {
            if (a % i == 0 && a/i >= i)
            {
                k += f(a/i, i) + 1;
            }
        }
    }
    else
    {
        k = 0;
    }
    return k;
}

int main()
{
    int n, a, t;
    cin >> n;
    while (n--)
    {
        cin >> a;
        t = f(a, 2) + 1;
        cout << t << endl;
    }
    return 0;
}
