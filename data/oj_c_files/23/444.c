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

char a[101][101];
int main()
{
    int j;
    for (j = 0; cin >> a[j]; ++ j);//??
    for (; j; )//????????
    {
        cout << a[--j];
        if (j)
            cout << " ";
    }
    return 0;
}
