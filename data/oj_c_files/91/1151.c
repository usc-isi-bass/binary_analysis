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
    char str[105];
    memset (str, 0, sizeof(str));
    cin.getline(str, 105);
    str[strlen(str)] = str[0];
    for (int i = 0; i < strlen(str) - 1; i++)
        cout <<(char)(str[i] + str[i+1]);
    return 0;
}