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
    char s[10];
    scanf("%s", &s);
    int n = 0, i = 0;
    for ( i = 0; s[i]!='\0'; i++ )
        n++;
    for ( i = n-1; i >= 0; i-- )
        printf("%c", s[i]);
    return 0;
}
