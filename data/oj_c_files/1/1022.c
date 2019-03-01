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

int f(int m, int n)
{
    int i, count = 0, flag = 0;
    if (m == 1)
        return 1;
    for (i = n; i > 1 ; i--)
    {
        if (m % i == 0)
        {
            count += f(m / i, i);
            flag = 1;
        }
    }
    if (flag)
        return count;
    else
    return 0;
}
int main()
{
    int n, k, m, temp;
    cin >> n;
    for (k = 0; k < n; k++)
    {
        cin >> m;
        cout << f(m, m) << endl;
    }
    return 0;
}