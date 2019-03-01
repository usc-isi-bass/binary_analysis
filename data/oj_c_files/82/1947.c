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
    int n, a, b, t = 0, i = 1, h = 0;
    cin >> n;
    do
    {
        cin >> a >> b;
        if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
            h = max(i - t, h);
        else
            t = i;
        i++;
    }while(i <= n);
    cout << h << endl;
    return 0;
}
