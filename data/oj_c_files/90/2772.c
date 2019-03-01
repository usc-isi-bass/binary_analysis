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
    int f(int, int);
    int t, T, m, n;
    
    cin >> T;
    
    for(t = 0; t < T; t++)
    {
        cin >> m >> n;
        
        cout << f(m, n) << endl;
    }
    
    return 0;
}

int f(int m, int n)
{
    if(m >= n && n > 1) return f(m - n, n) + f(m, n - 1);
    else if(m < n && n > 1) return f(m, n - 1);
    else if(n == 1) return 1;
}
