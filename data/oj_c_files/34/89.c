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



void Guess(int n)
{
    if (n == 1)
    {
        cout << "End" << endl;
    }
    else if (n % 2 != 0)
    {
        int result = n * 3 + 1;
        cout << n << "*3+1=" << result << endl;
        Guess(result);
    }
    else
    {
        int result = n / 2;
        cout << n << "/2=" << result << endl;
        Guess(result);
    }
}

int main()
{
    int n;
    cin >> n;
    Guess(n);
}
