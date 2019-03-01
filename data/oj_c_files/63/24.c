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
    int x1, x2, y1, y2, i, j, k;
    int a[101][101], b[101][101], c[101][101];
    cin >> x1 >> y1;
    for ( i = 1; i <= x1; i++ )
        for ( j = 1; j <= y1; j++ )
            cin >> a[i][j];
    cin >> x2 >> y2;
    for ( i = 1; i <= x2; i++ )
        for ( j = 1; j <= y2; j++ )
            cin >> b[i][j];
    for ( i = 1; i <= x1; i++ )
        for ( j = 1; j <= y2; j++ )
            c[i][j] = 0;
    for ( i = 1; i <= x1; i++ )
        for ( j = 1;j <= y2; j++ )
            for ( k = 1; k <= x2; k++ )
                c[i][j] += a[i][k] * b[k][j];
    for ( i = 1; i <= x1; i++ )
    {
        cout << c[i][1];
        for ( j = 2;j <= y2; j++ )
            cout << " " << c[i][j];
        cout << endl;
    }
    return 0;
}