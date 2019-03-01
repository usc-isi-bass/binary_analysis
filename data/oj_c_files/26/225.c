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

// ?????? ???1000010500 
// ??????? 
// 2010-12-8


int main()
{
    char str[100];
    char *p;
    int flag = 0;                                   // flag??????????? 
    gets(str);
    for (p = str;*p != '\0';p++)
    {
        if (*p == ' ' && flag == 0)                 // ????? 
        {
            flag = 1;
            continue;
        }
        if (*p == ' ' && flag == 1)                 // ????????????? 
        {
            *p = '1';                               // ????????? 
            continue;
        }
        if (*p != ' ')
            flag = 0;
    }
    for (p = str;*p != '\0';p++)
        if (*p != '1')
            cout << *p;
    return 0;
}
