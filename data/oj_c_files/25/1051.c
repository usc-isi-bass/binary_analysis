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
    int n, a[100] = {0}, l;
    cin >> n;
    a[0] = 1;
    l = 1;
    while (n--)
    {
        for (int i = 0; i < l; i++)
        {
            a[i] *= 2;
        }
        for (int i = 0; i < l; i++)
        {
            if (a[i] > 9)
            {
                a[i + 1]++;
                a[i] -= 10;
            }
        }
        if (a[l])
        {
            l++;
        }
    }
    for (int i = l - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
  
    return 0;
}
