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
    char s[101], s1[101];
    cin.getline( s, 101 );
    char *p;
    int i;
    for ( i = 0, p = s1; *( s + i + 1 ) != '\0'; i++ )
    {
        *p = *( s + i ) + *( s + i + 1 );
        p++;
    }
    *p = *( s + i ) + *s;
    *++p = '\0'; 
    cout << s1;
    return 0;
}
