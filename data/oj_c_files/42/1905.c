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

//*******************************
//* ????????????   ** 
//* ?????? 1300012948    ** 
//* ???2013.10.31           ** 
//*******************************
int main()
{
    int n, k, p, q;
    cin >> n;
    int a[n - 1];
    for(int i = 0; i <= n - 1; i++)               // ??????????? 
    {
          cin >> a[i];
    }
    cin >> k;                                     // ???????? 
    for(int i = 0; i <= n - 1; )                  // ??????????????????? 
    {
          if(a[i] == k)                           
          {
                  for(int m = i; m <= n - 1; m++)
                  {
                          a[m] = a[m + 1];
                  }
                  n--;
          }
          if(a[i] != k)                           
          i++; 
    }
    for(int i = 0; i <= n - 1; i++)              // ??????????????????????? 
    {
            if(i < n - 1)
            cout << a[i] << " ";
            else
            cout << a[i] <<endl;
    }
    return 0;
}