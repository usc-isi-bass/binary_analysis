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


int pos;

void match(char lch)
{
    int spos = pos;
    char ch;
    pos++;
    scanf("%c", &ch);
    while (ch == lch)
    {
        match(ch);
        pos++;
        scanf("%c", &ch);
    }
    printf("%d %d\n", spos, pos);
}

int main()
{
    char ch;
    pos = 0;
    scanf("%c", &ch);
    match(ch);
    return 0;
}