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
    int n;
    int sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if((i % 7)==0)
            continue;
        if((i%10) == 7 || (i - (i % 10)) == 70 || (i - (i % 100) == 700))
            continue;
        sum = sum + i*i;
    }

    cout << sum;
    return 0;
}
