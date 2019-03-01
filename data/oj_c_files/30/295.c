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

// ?????? ???1000010500
// ?7???????
int main()
{
    int n,i,k,sum = 0;
    cin >> n;
    for (i = 1;i <= n;i ++)
    {
        k = i / 10;                      // k??i????? 
        if (i % 7 == 0 || i % 10 == 7 || k == 7 )
        continue;
        sum = sum + i * i;
    }
    cout << sum;
    return 0;
}