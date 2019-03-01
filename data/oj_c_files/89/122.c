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
    int a[10000] = {0};
    int b[10000] = {0};
    int n;
    cin >> n;
    int i, j;
    while ( cin >> i >> j)
   {
       if (i==0 && j==0)  break;
       a[i]++;
       b[j]++;
   }
   for (i = 0; i<n; i++)
      if (a[i] == 0 && b[i] == n-1)
      {
          cout << i << endl;
          break;
      }
  if (i==n) cout << "NOT FOUND" << endl;
    return 0;
}