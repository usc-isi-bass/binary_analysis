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
    int a[100] , n , h , j  , i ; 
    cin >> n ; 
    memset(a , 0 , sizeof(a)) ; 
    a[1] = 1 ; 
    h = 1 ; 
    for (i = 1 ; i <= n ; i ++ )
    {
        for (j = 1 ; j <= h ; j ++ )
            a[j] += a[j] ; 
        for (j = 1 ; j <= h ; j ++ )
            if (a[j] >= 10)
            {
                a[j] = a[j] - 10 ; 
                a[j + 1] += 1 ; 
            }
        if (a[h + 1] != 0)
            h ++ ; 
    }
    for (i = h ; i >= 1 ; i -- )
        cout << a[i] ; 
    cout << endl ; 
    return 0 ; 
}
