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
  char line[101],label[101];
  int pos[101];
  int n , j ;
  int left;
  cin >> n ;
cin.get();
  for( j = 1 ;j <= n ;j ++ )
  {
       left = 0 ;
      
       cin .getline(line,101);    
       int len = strlen(line);
       for(int i = 0 ;i <= 100 ; i ++ )
       label[i]=' ';
       for( int i = 0 ;i <= len - 1; i ++ )
       {
                if(line[i] == '(')
                  {
                        left ++ ;
                        pos[left] = i ;    
                  }    
                   if(line[i] == ')')
                   {
                              if( left == 0)
                                label[i] ='?';        
                               else
                                left -- ;
                   }
      }
      for( int i = 1 ;i <= left ; i ++ )
           label[pos[i]]='$';
           label[len]='\0';
           cout<< line << endl ;
           cout<< label << endl ;
  }return 0 ;
}
              