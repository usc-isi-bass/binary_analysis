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
    char ch[50] ;
    cin.get( ch , 50 , '\n' ) ;
    int i = 0 ; 
    int n = strlen( ch ) ;
    for( i = 0 ; i <= n - 1 ; i ++ )
    {
         if( ( int )ch[i] >= 48 && ( int )ch[i] <= 57 )
         cout << ch[i] ;
         else
         if( i > 0 )
         if( ( int )ch[i - 1] >= 48 && ( int )ch[i - 1] <= 57 )
         cout << endl ;
    }
return 0 ;
}