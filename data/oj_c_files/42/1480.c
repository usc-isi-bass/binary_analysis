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
    int n, a[100000], k, i = 0, j = 0, s = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0, j = 0; j < n; j++)
    {
        if (a[j] != k)
        {
            a[i++] = a[j];
        }
        else
            s++;
    }
    for (j = 0; j < n - s - 1; j++)
    cout << a[j] << " ";
    cout << a[n - s - 1] << endl;
    return 0;
}