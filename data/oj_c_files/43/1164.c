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
    int m, a, b;
    cin >> m;
    for (a = 3; a <= (m / 2); a = a + 2)
        {
             int count1 = 1;
             for (int n = 2; n <= sqrt(a); n++)
                 {
                     if (a % n == 0)
                          continue;
                      count1++;
                 }
             if (count1 > sqrt(a) - 1)
                 {
                     b = m - a;
                     int count2 = 1;
                     for (int i = 2; i <= sqrt(b); i++)
                         {
                              if (b % i == 0)
                                  continue;
                              count2++;
                         }
                         if (count2 > sqrt(b) - 1)
                             cout << a << " " << b << endl;
                 }
             
        }
        return 0;
}
