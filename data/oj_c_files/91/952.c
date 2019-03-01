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

//**********************************************
//???????????                      **
//?  ?????  1200012896                  **
//?  ??2012.12.9                           **
//**********************************************
int main()
{
    char str1[101], str2[101], *p = str1, *q = str2;
    int len;
    cin.getline(str1, 101, '\n');
    len = strlen(str1);
    for (int i = 0; i <= len - 2; i++)
    {
        *(q + i) = *(p + i) + *(p + i + 1);
    }
    *(q + len - 1) = *(p + len - 1) + *p;
    for (int i = 0; i < len; q++, i++)
        cout << *q;
    return 0;
}