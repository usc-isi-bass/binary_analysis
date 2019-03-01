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
    int i, j, n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
       int num[51] = {0};
       num[0] = 01;
       for (i = 1; i <= n; i++)
       {
            for (j = 0; j < 50; j++)
            {
                 num[j] = 2 * num[j];
            }
            for (j = 0; j < 50; j++)
            {
                if (num[j] >= 10)
                {
                    num[j+1] += 1;
                    num[j] -= 10;
                }
            }
       }   
       i = 50;
       while (num[i] == 0)
       {
              i--;
       } 
       for (; i >= 0; i--)
       {
           cout << num[i];
       }
    }
    return 0;
}  
