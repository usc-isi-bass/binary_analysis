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
    int people[10000] = {0};
    int i, n, a, b, flag = 0;
    cin >> n;
    while(1)
    {
        cin >> a >> b;
        if ( a == 0 && b == 0 )
           break;
        people[a] = -1;
        people[b]++;
    }
    for ( i = 0; i < n; i++ )
        if ( people[i] == ( n - 1 ) )
        {
           cout << i << endl;
           flag = 1;
        }
    if ( flag == 0 )
       cout << "NOT FOUND" << endl;
    return 0;
}