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
//*???1.cpp   **
//*????????   **
//*?????? 1300012838 **
//*???2013.12.4  **
//********************************

int apple(int i, int n, int k, int s)
{
    int m;
    if (i == 0)
        return s;
    else
    {
        m = apple(i-1, n, k, s);
        if (m % (n - 1) != 0 || m == 0)
            return 0;
        return n * m / (n - 1) + k; 
    }
} 

int main()
{
    int m, n, k, s;
    cin >> n >> k;
    s = n - 1;
    do
    {
        m = apple(n, n, k, s);
        s += n - 1; 
    } while (m <= k);
    cout << m << endl;

    return 0;
}
    