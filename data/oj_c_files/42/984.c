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


//****************************************
//*???????????    **
//*??????  1100012927       **
//*???2011.10.22                          **
//*****************************************

int main ()
{
    int n, i, j, k;
    cin >> n;
    int a[n];
    for (i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0;i < n;i++)
    {
        if (a[i] == k)
        {
            j = i;
            for (; i < n;i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            i = j - 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i < n - 1)
        cout << a[i] << " ";
        else cout << a[i];
    }
    return 0;
}
