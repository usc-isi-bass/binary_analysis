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
    char c[50];
    char *p = NULL; 
    cin.getline(c,50);
    for ( p = c; p < c + strlen(c); p++ )
    {
        if ( *p >= '0' && *p <= '9' )
        {
            cout << *p; 
            if ( p < c+strlen(c)-1 && *(p+1) >= '0' && *(p+1) <= '9' ) continue;
            cout << endl;
        }
    }
    
    return 0;
}