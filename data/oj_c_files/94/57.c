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
    int num[500];
    int i, j, n, a, temp, m = 0;
    cin >> n;
    for ( i = 1; i <= n; i++ )
    {
        cin >> a;
        if ( a % 2 == 1 )
        {
             m = m + 1;
             num[m] = a;
        }
    }
    for ( i = 1; i < m; i++ )
        for ( j = i + 1; j <= m; j++ )
            if ( num[i] > num[j] )
            {
                 temp = num[i];
                 num[i] = num[j];
                 num[j] = temp;
            }
    cout << num[1];
    for ( i = 2; i <= m; i++ )
        cout << "," << num[i];
    return 0;
} 
