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
   char a[5000] , t;
   int la , i , j;
   scanf ( "%s" , a );
   la = strlen ( a );
   for ( i = 0 ; i < la ; i ++ )
    if ( 'a' <= a[i] && a[i] <= 'z' )
     a[i] = a[i] - 'a' + 'A';
   for ( i = 0 ; i < la ; )
    {
     t = a[i++] , j = 1;
     for ( ; a[i] == t ; i ++ , j ++ );
     printf ( "(%c,%d)" , t , j );
    }
  // getchar (); getchar ();
   return 0;
}
