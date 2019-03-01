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
    int n , temp ;
    cin >> n ;
    int a[n] ;
    int i , j ;
    for ( i = 0 ; i < n ; i++ )
      {
          cin >> a[i] ;
      }
       for ( i = 0 ; i < n ; i++ )
          {
              for ( j = i + 1 ; j < n ; j++ )
                 {
                     if( a[i] > a[j] )
                        {
                            temp = a[i] ;
                            a[i] = a[j];
                            a[j] = temp ;
                        }//??????
                 }
          }
       for ( i = 0 ; i < n ; i++ )
          {
              if( a[i] % 2 != 0)
               {
                  cout << a[i] ;
                  break;//???????????
               }
          }
          for ( i = i + 1 ; i < n ; i++ )
          {
              if( a[i] % 2 != 0)
               {
                  cout << "," << a[i] ;//???????????????????
               }
          }

      return 0 ;
}

