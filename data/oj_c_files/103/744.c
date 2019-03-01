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
    char a[1000], last;
    memset(a,'%',1000);
    cin >> a;
    int i = 0, count = 1;
    while (a[i] != '%')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] += 'A' - 'a';
        i++;
    }
    last = a[0];
    i = 1;
    while (a[i] != '%')
    {
        if (a[i] == last)
            count++;
        else
        {
            cout << "(" << last << "," << count << ")";
            last = a[i];
            count = 1;
        }
        i++;
    }
    return 0;
}