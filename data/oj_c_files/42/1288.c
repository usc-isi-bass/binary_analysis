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

//**************************** 
//*???????????    *
//*????? 1200012708     *
//*???2012?10?29?      *
//**************************** 

int main()
{
    int a[100005], n, k, i; // n??????k?????? 
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    i = 0; // ??????? 
    while (i < n) // i??n???????????? 
    {
        // ??????????????????????????????????-1 
        if (a[i] == k) 
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
        else // ??i?????????????????? 
        {
            i++;
        }
    }
    cout << a[0];
    for (i = 1; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}