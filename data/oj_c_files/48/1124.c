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

//**************************************
//* ????????????          ** 
//* ?????? 1300012948           ** 
//* ???2013.12.5                   ** 
//**************************************
int a[11][11], b[11][11], day = 0;
int main()
{
    int m, n;
    cin >> m >> n; // ????????????? 
    void result(int p, int q); // ???? 
    for(int i = 0; i <= 11; i++) // ????????????????????????0 
    {
            for(int j = 0; j <= 11; j++)
            {
                    a[i][j] = 0;
            }
    }
    a[5][5] = m; // ????????????????????? 
    result(m, n); // ???? 
    return 0;
}

void result(int p, int q)
{
     if(day < q) // ??????????????? 
     {
            for(int r = 1; r<= 9; r++) // ?????????day???????????b?? 
            {
                  for(int s = 1; s <= 9; s++)
                  {
                        b[r][s] = a[r][s]; // ??????r, s???a?????b????? 
                        for(int temp1 = r - 1; temp1 <= r + 1; temp1++) // ?????r, s????????????????????????????????
                        {
                                for(int temp2 = s - 1; temp2 <= s + 1; temp2++)
                                {
                                        b[r][s] += a[temp1][temp2];
                                }
                        }
                  }
            }
            day++; // ???1 
            for(int i = 1; i <= 9; i++) // ???b???????a 
            {
                    for(int j = 1; j <= 9; j++)
                    {
                            a[i][j] = b[i][j];
                    }
            }
            result(p, q); // ???????day + 1???????? 
     }
     else // ????????????????????? 
     {
         for(int i = 1; i <= 9; i++)
         {
                 for(int j = 1; j <= 9; j++)
                 {
                         if(j < 9)
                         {
                              cout << a[i][j] << " ";
                         }
                         else
                         {
                             cout << a[i][j] << endl;
                         }
                 }
         }
     }
} 