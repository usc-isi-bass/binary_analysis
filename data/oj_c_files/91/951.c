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
    char str1[101], str2[101];
    int len;
    cin.getline(str1, 101, '\n');
    len = strlen(str1);
    for (int i = 0; i <= len -2; i++)
    {
        str2[i] = (char)((int)str1[i] + (int)str1[i + 1]);
    }
    str2[len - 1] = (char)((int)str1[len - 1] + (int)str1[0]);
    for (int j = 0; j <= len - 1; j++)
        cout << str2[j];
    return 0;
}