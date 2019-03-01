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
    int i, j, k = 0, n;
    int a[300], num[5];
    cin >> n;
    double sum = 0;
    double ave;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ave = sum / n;
    int flag = 0;
    for (i = 0; i < n; i++)
    {
         for (j = 0; j < n; j++)
         {
              if (fabs(ave - a[i]) < fabs(ave - a[j]))
              {
                   break;
              }
         }
         if (j == n)
         {
              num[k++] = a[i]; 
         }
    }
    if (k == 1)
    {
          cout << num[0] << endl;
    }
    if (k == 2)
    {
        if (num[0] > num[1])
        {
            cout << num[1] << "," << num[0] << endl;
        }
        else
        {
            cout << num[0] << "," << num[1] << endl;
        }
    }    
    return 0;
}
    
    
     
