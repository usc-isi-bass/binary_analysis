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

int main ()
{
    int n ;
    cin >> n ;
    int yeah[100] = {0} ;              //?????? 
    for ( int i = 1 ; i <= n ; i++ )
        cin >> yeah[i-1] ;             //??????
    for ( int i = n ; i >= 2 ; i-- )
        cout << yeah[i-1] << " " ;     //??????
    cout << yeah[0] ;                  //???????????
    return 0 ; 
}
// ( > w < ) finished~
