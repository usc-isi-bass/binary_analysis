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
 int a, b, c, x, y, z;
 for (a = 1; a <= 3; a++) 
  {
   for (b = 1; b <= 3; b++)
   {
    if (b == a)
    continue;
    for (c = 1; c <= 3; c++)
     {
      if ((c == b) || (c == a))
      continue;
      x = (b >= a) + (c == a);
      y = (a >= b) + (a >= c);
      z = (c >= b) + (b >= a);
      if (((x + a) == (y + b)) && ((y + b) == (z + c)))
      {
       if (a > b)
        {
          if (b > c)
            cout<< "C" << "B" << "A" ;
          else if (a > c)
            cout<< "B" << "C" << "A";
          else
            cout<< "B" << "A" << "C";
         }
       else
        {
          if (a > c)
            cout << "C" << "A" << "B";
          else if (b > c)
            cout << "A" << "C" << "B";
          else
            cout << "A" << "B" << "C";
         }
      }
    }
   }
  }
   return 0;
}