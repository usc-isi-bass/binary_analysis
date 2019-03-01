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
  char a[101] ;
  cin.getline( a ,101 );
  char *p;
  p = a ;
  int i ;
  int len = strlen(a) ;
  for( i = 0 ; i <= len - 1 ;i ++ )
  {
    if( p[i] != ' ')
    cout << p[i] ;     
    else if ( (p[i -1] !=' ')&&( p[i] == ' '))
    cout <<" ";  
  }
  cout << endl ;
  return 0 ;
    
    
    
    
    
    
    
    
    
    
    
}
    
    
    
    
    
    
    