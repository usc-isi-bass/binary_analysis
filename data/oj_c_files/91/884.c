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
    char str[150], x;
    cin.getline(str, 150);
    int len = strlen(str);
    char *p = str;
    for (; p < &str[len-1]; p++)
    {
        x = *p + *(p + 1);
        cout << x;
    }
    x = str[len-1] + str[0];
    cout << x << endl;
    return 0;
}