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




int fib(int i)
{
    int a = 0, b = 1;
    while (--i) {
        a = a + b;
        swap(a, b);
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    while (n--) {
        int i;
        cin >> i;
        cout << fib(i) << endl;
    }
    return 0;
}