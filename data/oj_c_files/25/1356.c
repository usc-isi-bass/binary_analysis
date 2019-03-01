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

/**
 * @file        5.cpp
 * @author      ???
 * @date        2013-11-13
 * @description ?????????2?N??
 */
int main(void)
{
    int N, a[100] = {0}, i, k;
    a[99] = 1;
    cin >> N;
    for( i = 0 ; i < N ; i++ )
    {
        for( k = 1 ; k <= 100 ; k++ )
            a[100 - k] *= 2;
        for( k = 1 ; k <= 100 ; k++ )
            if( a[100 - k] > 9 )
            {
                a[99 - k] += a[100 - k] / 10;
                a[100 - k] %= 10;
            }
    }
    for( k = 0 ; k < 100 ; k++ )
        if( a[k] )
            break;
    for( ; k < 100 ; k++ )
        cout << a[k];
    return 0;
}