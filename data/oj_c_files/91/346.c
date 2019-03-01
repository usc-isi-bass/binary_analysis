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
    char str[101];
    char friend[101];
    char *p = str;
    char *q = friend;
    gets(str);
    while (p < str + strlen(str) - 1) {
        *q++ = *p + *(p + 1);
        p++;
    }
    *q = *p + *str;
    *(friend + strlen(str)) = 0;
    puts(friend);
    return 0;
}