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
    char s[6] = {0,0,0,0,0,0};
    scanf("%s", &s);
    int i = 0;
    for ( i = 5; i >= 1 && s[i] == 0; i-- );
    for ( ; i >= 0; i-- )
        printf("%c", s[i]);
    return 0;
}
