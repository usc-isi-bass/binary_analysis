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
    int m, i, j, k, n;
    cin >> m;
    for (i = 3; i <= m /2; i += 2)
    {
        j = m - i;
        for (k = 2; k < i; k ++)
            if (i % k == 0) break;
        else
            if (k > sqrt(i))
            {
                for (n = 3; n < j; n += 2)
                    if (j % n == 0)
                        break;
                    if (n > sqrt(j))
                    {
                        cout << i << " " << j << endl;
                        break;
                    }
            }
    }
    return 0;
}