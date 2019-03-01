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

int main(void)
{
    char c;
    int k=-1;
    while(scanf("%c", &c)!=EOF)
    {
        if(!isspace(c))
            k=-1;
            else
            k++;
        if(isspace(c)&&k!=0)
            continue;
        printf("%c", c);
    }
    return 0;
}
