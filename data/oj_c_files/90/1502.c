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

int arrange( int a, int l, int before )
{
    if( l == 1 )
    return 1;
    int sum = 0;
    for( int i = before; i <= a ; i++ )
        if( a - i >= i )
         sum += arrange( a - i, l - 1, i );
        else break;
    return sum;
}
int main()
{
    int t ;
    cin >> t;
    for( int i = 0; i < t; i++ )
    {
    int n, m;
    cin >> m >> n;
    cout << arrange( m, n, 0 ) << endl;
    }

}
