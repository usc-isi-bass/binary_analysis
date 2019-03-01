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
    int n = 0 ;
    cin >> n ;
    int i = 0 ;
    char ch[100][100] ;
    for( i = 0 ; i <= n - 1 ; i ++ )
    {
         while( cin.get() != '\n');
         cin.get( ch[i] , 100 , '\n' ) ;
    }
    for( i = 0 ; i <= n - 1 ; i ++ )
    {
         if( ch[i][0] == 95 || ( ch[i][0] >= 65 && ch[i][0] <= 90 ) || ( ch[i][0] >= 97 && ch[i][0] <= 122 ) )
         {
         int j = 0 ;
         int counter = 0 ;
         int m = strlen( ch[i] ) ;
         for( j = 0 ; j <= m - 1 ; j ++ )
         {
              if( ch[i][j] == 95 || ( ch[i][j] >= 65 && ch[i][j] <= 90 ) || ( ch[i][j] >= 97 && ch[i][j] <= 122 ) || ( ch[i][j] >= 48 && ch[i][j] <= 57 ) ) 
              counter = counter ;
              else
              counter ++ ;
         }
         if( counter == 0 )
         cout << 1 << endl ;
         else
         cout << 0 << endl ;
         }
         else
         cout << 0 << endl ;
    }
return 0;
}