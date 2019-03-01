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
    int num[15], a, i,x ,k, t;
    cin >> a;
    while(a != -1)
    {
         i = 0;
         x = 0;
         while(a != 0)
         {
            num[i] = a;  
            i = i + 1;
            cin >> a;
         }
         for ( k = 0; k <= i-1; k++)
         {
             for ( t = 0; t <=  i - 1; t++)
             {
                 if ( num[k] == num[t]*2)
                 x = x + 1;
             }
         }
         cout << x << endl;
         cin >> a;
    }
    return 0;
}
    
