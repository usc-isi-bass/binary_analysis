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

      char s[100] ;
      cin.getline(s,100);//???????
      int length = strlen (s) ;//????????
      int i = 0 , j = 0 , k ;
      int max = 0 ;
      int temp ;
      int flag[100] ;
      char shu[100][1000];
      memset( flag , 0 , sizeof(flag)  );//???flag????0

      for ( k = 0 ; k < length ; k++ )
         {
                    if( s[k] > 35 )
                       {
                           flag[i]++ ;
                           shu[i][j] = s[k] ;
                           j++ ;
                       }
                      else
                        {
                            i++ ;
                            j=0 ;
                        }//??????????????????
         }
               cout << shu[i] ;//??????????
                  for ( k = i - 1 ; k >= 0 ; k-- )
                       {
                           cout<<" "<<shu[k];//?????????????
                       }
        return 0;
}
