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

int f(char c)
{
    if (c == '.')
        c = '@';
    return c;
}
int g(char c)
{
    if (c == '.')
        c = '*';
    return c;
}
int main()
{
    int n, m, sum = 0;
    char c[102][102];
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    cin >> m;
    
    for (int k = 1; k <= m - 1; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (c[i][j] != '@')
                    continue;
                else
                {
                    c[i - 1][j] = f(c[i - 1][j]);
                    c[i + 1][j] = g(c[i + 1][j]);
                    c[i][j + 1] = g(c[i][j + 1]);
                    c[i][j - 1] = f(c[i][j - 1]);
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (c[i][j] == '*') c[i][j] = '@';
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum += c[i][j] == '@';
        }
    }
    cout << sum << endl;
    return 0;
}