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
 int a[16], b, i = 0, k;
 while (1)
 {
  b = 0;
  int a[16] = {0};
  for ( i = 0 ; i <= 15 ; i++ )
  {   
   cin >> a[i];
   if (( a[i] == 0 ) || ( a[i] == -1 ))
    break;
    for ( k = 0 ; k < i ; k++ )
    {
     if (( a[i] == 2 * a[k] ) || ( a[i] == 0.5 *a[k]))
      b++;
    }
   }
    if ( a[i] == -1 )
     break;
    cout << b <<endl;
  }
  return 0;
}