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
    int n, i, j, m = 0;
    cin >> n;
    int num[20001] = { 0 };
    for ( i = 1; i <= n; i++ )
        cin >> num[i];
    cout << num[1];
    for ( i = 2; i <= n; i++ )
    {
        int k = 0;
        for ( j = 1; j <= i - 1; j++ )
            if ( num[i] == num[j] )
            {
                 k = 1;
                 break;
            }
        if ( k == 0 )
           cout << " " << num[i];
    }
    return 0;
}
