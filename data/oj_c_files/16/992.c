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
    int a[10001], n, i, x;
    char ch;
    n = 0;
    while ( (ch=cin.get()) != '\n' )
    {
        a[n] = ch - '0';
        n++;
    }
    for ( i = 0; i < n / 2; i++ )
	{ 
		x = a[i];
        a[i] = a[n-i-1];
		a[n-i-1] = x;
	}
    for ( i = 0; i < n; i++ )
        cout << a[i];
   return 0;
}