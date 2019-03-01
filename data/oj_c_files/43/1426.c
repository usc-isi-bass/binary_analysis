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

//****************************
//*?????????   **
//*?????? 1200012896 **
//*???2012.10.21  **
//****************************
int main()
{
    int n, a, b, i, m;
    cin >> n; 
    for (a = 3; a <= n / 2; a++)
    {
        b = n - a;
        for (i = 2; i <= (int)sqrt (a); i++)
        {
            if (a % i == 0)
               break;
        }
        if (i == (int)sqrt (a) + 1)
        {
              for (m = 2; m <= (int)sqrt (b); m++)
                  {
                     if (b % m == 0)
                        break;
                  }
                  if (m == (int)sqrt (b) + 1)
                      cout << a << " " << b << endl;
        } 
    } 
    return 0;
}