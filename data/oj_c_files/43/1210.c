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
    int n,i,k,s,l,m,a,b;
    cin >> n;
    s = n / 2;
    for (i = 3;i <= s;i += 2)
    {
          l = sqrt(i);
          for (k = 1;k <= l;k++)
          {
              if (i % k == 0 && k != 1)
              break;
              if (k == l)
              {
                    a = n - i;
                    b = sqrt(a);
                    for (m = 1;m <= b;m++)
                    {
                        if (a % m == 0 && m != 1)
                        break;
                        if (m == b)
                        cout << i << " " << n-i << endl;
                    }
              }
          }
    }
    
    return 0;
}

