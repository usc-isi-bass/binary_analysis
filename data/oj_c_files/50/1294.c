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
    int w, a[13], b[13], c[13], i;//a[i]??i?1??????b[i]??i?13????? 
    c[1] = c[3] = c[5] = c[7] = c[8] = c[10] = c[12] = 31 % 7;
    c[2] = 28 % 7;
    c[4] = c[6] = c[9] = c[11] = 30 % 7;
    cin >> w;
    a[1] = w;
    b[1] = (a[1] + 12) % 7;
    for(i = 2;i <= 12;i++)
    {
        a[i] = (a[i - 1] + c[i - 1]) % 7;
        b[i] = (a[i] + 12) % 7;
    }
    for(i = 1;i <= 12;i++)
    {
        if(b[i] == 5)
        {cout << i << endl;}
    }
}