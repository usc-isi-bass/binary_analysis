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

//********************************
//* ??????                ** 
//* ?????? 1300012948     ** 
//* ???2013.10.30            ** 
//********************************
int main()
{
    int a[15], n, m;
    while(cin >> a[0])
    {
              m = 0;                              // ??????m????0 
              if(a[0] == -1)                      // ??????-1?????? 
              break;
              else
              {
                     int i = 1;
                     cin >> a[i];
                     while(a[i] != 0)             // ??a[i]???0 
                     {
                                cin >> a[++i];
                     }
                     n = i;
              }
              for(int i = 0; i <= n - 2; i++)     // ??i???????????????????????????????? 
              {
                    for(int j = i + 1; j <= n -1; j++)
                    {
                          if((a[i] == a[j] * 2) || (a[j] == a[i] * 2))
                          m++;
                    }
              }
              cout << m << endl;                  // ?????????????? 
    }
    return 0;
} 