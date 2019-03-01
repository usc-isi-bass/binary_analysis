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
    int count[300] = {0};
    int c = 0, d = 1;
    while ( (c = getchar()) != '\n' && c != '\0' )
    {
        if ( c == ' ' )
        {
            d = -1;
            continue;
        }
        count[c] += d;
    }
    int i = 0;
    for ( i = 0; i < 300 && count[i] == 0; i++ )
        ;
    if ( i == 300 )
        printf("YES");
    else
        printf("NO");
    return 0;
}
