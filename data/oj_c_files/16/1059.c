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
    char a[5] = {0};
    int i = 0;
    while ((a[i] = cin.get()) != '\n')
        i++;
        for ( ; i >= 0; i--)
            cout << a[i];
    return 0;
}