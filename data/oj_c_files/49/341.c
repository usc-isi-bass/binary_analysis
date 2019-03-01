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
    char a[501],c='a';
    int i = 0,j,k,l,m = 0,n;
    while(c != '\n')
    {
        i++;
        c = cin.get();
        a[i] = c;
    }
    i--;
    for(j = 2;j <= i;j++)
    {
        for(k = 1;k <= i - j + 1;k++)
        {
            m = 0;
            for(l = 0;l <= j - 1;l++)
            {
                if(a[k + l] != a[k + j - l - 1])
                {
                    m = 1;
                    break;
                }
            }
            if(m == 0)
            {
                for(n = 1;n <= j;n++)
                cout << a[k + n - 1];
                cout << endl ;
            }
        }
    }
    return 0;
}
