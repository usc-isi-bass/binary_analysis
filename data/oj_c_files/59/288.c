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

void f(int, int);
int i, j;
char a[102][102][2] = {0};
int main()
{
    int i, j;
    int n, m;
    int l = 0;
    int sum = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cin >> a[i][j][0];
            a[i][j][1] = a[i][j][0];    
        }     
    }
    cin >> m;
    for(i = 1; i < m; i++)
    {
        f(n, l);
        l = 1 - l;    
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(a[i][j][l] == '@')
                sum++;    
        }    
    }
    cout << sum << endl;
    return 0;
}
void f(int n, int l)
{
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(a[i][j][l] == '@')
            {
                if(a[i - 1][j][l] != '#')  a[i - 1][j][1 - l] = '@';  
                if(a[i + 1][j][l] != '#')  a[i + 1][j][1 - l] = '@';
                if(a[i][j - 1][l] != '#')  a[i][j - 1][1 - l] = '@';
                if(a[i][j + 1][l] != '#')  a[i][j + 1][1 - l] = '@';  
            }    
        }    
    }    
}

