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
   char a[100001] ;
   char *p ;
   int t ;
   p = a ;
   int n , i , k , j ;
   cin >> n ;
   int q = 0 ;
   for( i = 1 ; i <= n ; i ++ )
   {
     cin >> p ;
     k = strlen(p); 
      for( j = 0 ; j <= k - 1 ; j ++ )
      {
                 q = 0 ;
                 for(  t = 0 ; t <= k - 1 ; t ++ )
                 {
                    if( p[j] == p[t] )
                    {    
                      q ++ ;   
                    }    
             
                 }
                 if( q == 1 )
                  break ;
                 
      }
                  if(q == 1 )
                  {
                       cout << p[j] << endl;;
                        
                  }
                   else
                   {
                       cout <<"no" <<endl ; 
                             
                   } 
     memset(p,0,sizeof(p));
   }
   return 0 ;
}