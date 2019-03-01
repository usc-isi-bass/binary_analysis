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
    int n, i, j, k, s = 0, m = 0, len;
    char str[100001];
    int a[100001] = {0};
    char result[1000];
    int flag[1000] = {0};
    cin >> n;
    cin.get();
    for(i = 1; i <= n; i++)
    {
          cin.getline(str, 100000);
          len = strlen(str);
          for(j = 0; j < len; j++)
          {
                for(k = 0; k < len; k++)
                {
                   if(j == k)
                   continue;
                      if(str[k] == str[j])
                      {
                                s++;
                      }
                }
                if(s == 0)
                {
                      result[i] = str[j];
                      break;
                }
                else
                      m++;
                s = 0;
          }
          if(m == len)
              flag[i] = 1;
          m = 0;
    }
    for(i = 1; i <= n; i++)
    {
          if(flag[i] == 1)
              cout << "no" <<endl;
          else
              cout << result[i] << endl;
    }
    return 0;
}