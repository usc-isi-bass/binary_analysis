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
    int n, m;
    cin >> n >> m;
    int a[2*n];
    int *p = NULL, *q = NULL;
    for ( p = a; p < a+n; p++ )
        cin >> *p;
    for ( q = a, p = a+n; q < a+n-m; p++, q++ )
        *p = *q;
    p = a+n-m;
    cout << *p;
    for ( p = a+n-m+1; p < a+n+n-m; p++ )
        cout << " " << *p;
    
    
    return 0;
}