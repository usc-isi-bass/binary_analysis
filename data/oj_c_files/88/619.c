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

char c[101], *p;
int s;
int main()
{
    cin.getline(c, 101);
    s = -1;//?s????????????????????
    p = c;
    do
    {
        if (*p <= '9' && *p >= '0')//??????????s??
        {
            if (s == -1)
                s = 0;
            s = s * 10 + *p - '0';
        }
        else//????????????
        {
            if (s != -1)
                cout << s << endl;
            s = -1;
        }
    }while(*p++);
    return 0;
}
