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

int jg(int);
int main()
{
    int n;
    cin >> n;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            cout << n << "/" << 2 << "=" << jg(n) << endl;
        }
        if(n % 2 != 0)
        {
            cout << n << "*" << 3 << "+" << 1 << "=" << jg(n) << endl;
        }
        n = jg(n);
    }
    cout << "End";

    return 0;
}

int jg(int x)
{
    if(x % 2 == 0)
    {
        return x / 2;     
    }
    else
    return 3 * x + 1;
}