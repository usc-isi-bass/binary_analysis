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
    int n, i = 10;
    cin >> n;
    if(n < 10)
        cout << n << endl;
    else
        if(n == 10)
        cout << 01 << endl;
        else
           {
                while(n > 0)
             {
                cout << n % i;
                n = n / i;

             }
           }
    return 0;
}
