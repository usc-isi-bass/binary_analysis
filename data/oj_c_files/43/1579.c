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

//*************************
//*  ????????? 
//*  ????? 
//*  ???1200012941 
//*  ???2012?10?22? 
//*************************
int main()
{
    int i, j, x, n;
    cin >> n;
    for (x = 3; x <= n / 2; x = x + 2)
    {
        for (i = 2; i <=(int)sqrt(x) + 1; i++) 
        {
            if (x % i == 0)
                break;
            if (i == (int)sqrt(x) + 1)
            {
                for (j = 2; j <=(int)sqrt(n-x) + 1; j++) 
                {
                     if ((n-x) % j == 0)
                         break;
                     if (j == (int)sqrt(n-x) + 1) 
                         cout << x << " " << n - x << endl;
                }
            }
        }
    }
    return 0;
}           
