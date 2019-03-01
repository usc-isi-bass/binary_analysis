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
    int k, m, n, a[100][100], i, j, l, S = 0;
    cin >> k;
    for(i = 1;i <= k;i++)
    {
        cin >> m >> n;
        for(j = 0;j <= m-1;j++)
        {  
            for(l = 0;l <= n-1;l++)
            {
                cin >> a[j][l];
                if(j == 0 || j == m-1 || l == 0 || l == n-1)
                {
                    S = S + a[j][l];
                }
            }
        }
        if(i < k)
        {cout << S << '\n';}
        else
        {cout << S;}
        S = 0;
    }
}