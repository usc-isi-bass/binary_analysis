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
    char str[1000];
    memset(str, 0, sizeof(str));
    cin.getline(str, 1000, '\n');
    for (int i = 0; str[i]; i ++)
    {
        if (str[i] != ' ')
            cout << str[i];
        else
        {
            if (str[i + 1] != ' ')
                cout << str[i];
         }
    }
    cout << endl;
    return 0;
}