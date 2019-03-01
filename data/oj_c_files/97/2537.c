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
    int x , i , a[7] = {0 , 100 , 50 , 20 , 10 , 5 , 1} ; 
    cin >> x ; 
    for (i = 1 ; i <= 6 ; i ++ ) 
    {
        cout << (x / a[i]) << endl ; 
        x %= a[i] ; 
        }
    return 0 ; 
}
