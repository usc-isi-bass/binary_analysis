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

int main ()
{
    char a[101],flag[2];
    int t, i, j, k;
    cin.getline(a, 101);
    flag[0] = a[0];
    j = strlen(a);
    for (i = 0; i < j; i++)
    {
        if (a[i] != flag[0] && a[i]!= '0')
        {
            for (k = i - 1; k >= 0; k--)
            {
                if (a[k] == flag[0])
                {
                    cout << k << " "<< i << endl;
                    a[i] = '0';
                    a[k] = '0';
                    break;
                }
            }
        }
    }
    return 0;
}