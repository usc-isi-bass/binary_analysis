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


char a1[252] , b1[252];
int a[252] , b[252] , la , lb , l;

int main ()
{
   gets (a1); gets (b1);
   la = strlen (a1) , lb = strlen (b1) , l = la > lb ? la : lb;
   int i;
   for ( i = 0 ; i < la ; i ++ )
    a[la-i-1] = a1[i] - '0';
   for ( i = 0 ; i < lb ; i ++ )
    b[lb-i-1] = b1[i] - '0';
   for ( i = 0 ; i < l ; i ++ )
    a[i] += b[i] , a[i+1] += a[i] / 10 , a[i] %= 10;
   for ( ; a[l] == 0 && l >= 0 ; l -- );
   l ++;
   if ( l <= 0 )  l = 1;
   for ( i = l-1 ; i >= 0 ; i -- )
    printf ( "%d" , a[i] );
  // getchar (); getchar ();
   return 0;
}
