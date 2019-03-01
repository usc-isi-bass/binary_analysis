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
    int n, i = 0, k;
    cin >> n;
    int num[40] = {0};
    int mirror[40] = {0};
    num[39] = 1;
    mirror[39] = 1;
    if (n == 0)
        cout << 1 << endl;
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (k = 39; k >= 0; k--)
            {
                num[k] = num[k] + mirror[k];
                if (num[k] >= 10)
                {
                    num[k] = num[k] - 10;
                    num[k - 1]++;
                }
            }
            for (k = 0; k <= 39; k++)
                mirror[k] = num[k];
        }
        k = 0;
        while (num[k] == 0 )
            k++;
        for (k; k <= 39; k++)
            cout << num[k];
        cout << endl;
    }
    return 0;
}
