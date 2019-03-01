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
    int a[100010], n, k, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    num = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            for (int j = i; j < num - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[num - 1] = k + 1;  //????k,???????,???.
            i--;
            num--;
        }
    }
    for (int i = 0; i < num - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a [num - 1] << endl;

    return 0;
}
