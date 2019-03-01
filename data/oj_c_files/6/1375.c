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
    int k,count;
    cin >>k;
    for (count = 0; count < k; count++)
    {
        int i,j,n,m,a[100][100],sum = 0;
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (j = 1; j < m - 1; j++ )
        {
            sum = sum + a[0][j] + a[n-1][j];
        }
        for (i = 0; i < n; i++ )
        {
            sum = sum + a[i][0] + a[i][m-1];
        }
        cout << sum << endl;
    }
    return 0;
}