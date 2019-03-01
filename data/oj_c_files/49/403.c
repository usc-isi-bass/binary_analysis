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


void check(char a[], int i, int j)
{
    int k, m = 0;
    for (k = 0; k <= i / 2; k++)
    {
        if (a[j + k] != a[j + i - 1 - k])
        {
            m = 1;
            break;
        }
    }
    if (m != 1)
    {
        for (k = 0; k < i; k++)
        {
            cout << a[j + k];
        }
        cout << endl;
    }
}

int main()
{
    char a[500];
    int n, i, j;
    cin.getline(a, 500);
    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    n = i;
    for (i = 2; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            check(a, i, j);
        }
    }
    return 0;
}