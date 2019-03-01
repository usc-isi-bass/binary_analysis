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
    int k, m, n, i, j, sum;
    cin >> k;
    while ( k-- )
    {
        sum = 0;
        cin >> m >> n;
        int a[m][n];
        for ( i = 0; i < m; i++ )
            for ( j = 0; j < n; j++ )
                cin >> *(*(a+i)+j);
        if ( m == 1 )                     //??????,???????? 
        {
            for ( i = 0; i < n; i++ )
                sum += *(*(a)+i);
            cout << sum << endl;
            continue;
        }
        if ( n == 1 )
        {
            for ( i = 0; i < m; i++ )
                sum += *(*(a+i));
            cout << sum << endl;
            continue;
        }
        for ( i = 0; i < n; i++ )         //???????????? 
        {
            sum += *(*(a)+i);
            sum += *(*(a+m-1)+i);
        }
        for ( i = 1; i < m - 1; i++ )     //???????????? 
        {
            sum += *(*(a+i));
            sum += *(*(a+i)+n-1);
        }
        cout << sum << endl; 
    }
    
    return 0;
}
