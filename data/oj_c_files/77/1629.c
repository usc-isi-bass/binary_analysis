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
    char str[120], *p;
    p = str;
    int boy[100];
    cin >> str;
    int m = 0, bo = 0;
    while(*p != 0)
    {
        if(*p == str[0])
        {
            bo++;
            boy[bo] = m;
        }
        else
        {
            cout << boy[bo] << " " << m << endl;
            bo--;
        }
        p++;
        m++;
    }
}
