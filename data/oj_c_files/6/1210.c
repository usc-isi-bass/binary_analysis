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
    int m,n,k,i,j;
    cin >> k ;
    while (k--)
    {
        int sum=0;
        cin >> m >> n;
        int a[m][n];
        for (i=0; i<m; i++)
            for (j=0; j<n; j++)
                cin >> a[i][j];

        int (*p)[n];
        p=a;
        for (j=0; j<n-1; j++)
            sum+=*(*p+j);
        for (i=0; i<m-1; i++)
            sum+=*(*(p+i)+n-1);
        for (j=1; j<n; j++)
            sum+=*(*(p+m-1)+j);
        for (i=1; i<m; i++)
            sum+=**(p+i);
            cout << sum << endl;

    }
    return 0;
}
