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
    int a[100][100];
    int c,i,j;
    int m,n,k;
    cin >> k;
    for(c = 1;c <= k;c++)
    {
        cin >> m >> n;
        for(i = 1;i <= m;i++)
        for(j = 1;j <= n;j++)
        cin >> a[i][j];
        int sum ,sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
        for(i = 1;i <= m;i++)
        {
            sum1 = sum1 + a[i][1];
            sum2 = sum2 + a[i][n];    
        }
        for(j = 1;j <= n;j++)
        {
            sum3 = sum3 + a[1][j];
            sum4 = sum4 + a[m][j];    
        }
        sum = sum1 + sum2 + sum3 + sum4 - a[1][1] - a[1][n] - a[m][1] -a[m][n];
        cout << sum << endl; 
    }
    return 0;    
}