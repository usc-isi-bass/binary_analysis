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
//*???4.cpp   **
//*?????????   **
//*?????? 1300012838 **
//*???2013.10.23  **
//********************************

int main()
{ 
    int m, judge, k;
    cin >> m; 
    for (int i = 3; i <= m / 2; i++)
    {
        judge = 1;
        for (int j = 2; j <= sqrt((double)i); j++)
        {
            if (i % j == 0)
            {
                judge = 0;
                break;
            }
        }
        if (judge == 1)
        {
            k = m - i;
            judge = 1;
            for (int j = 2; j <= sqrt((double)k); j++)
            {
                if (k % j == 0)
                {
                    judge = 0;
                    break;
                }
            }
            if (judge == 1)
            {
                cout << i << " " << k << endl;
            }
        }
    }
    return 0;                    
}  