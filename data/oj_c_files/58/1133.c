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


int isLegal(char *str)
{
    if (!isalpha(*str) && *str != '_') return 0;
    for (str++;*str;str++)
        if (!isalpha(*str) && !isdigit(*str) && *str != '_') return 0;
    return 1;
}
int main()
{
    char str[100];
    int n;
    scanf("%d", &n);
    gets(str);
    while (n--)
    {
          gets(str);
          printf("%d\n", isLegal(str));
    }
    return 0;
}
