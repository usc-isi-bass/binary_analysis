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

// ?????? ???1000010500 
// ?????????? 
// 2010-12-8


int main()
{
    int a,m,n,i,j,k,b[100][100],sum = 0;
    cin >> a;                                            // ???? 
    for (k = 0;k < a;k++)
    {
        sum = 0;
        cin >> m >> n;;
        for (i = 0;i < m;i++)
            for (j = 0;j < n;j++)
                cin >> b[i][j];
        for (i = 0;i < m;i++)
            sum += *(*(b + i)) + *(*(b + i) + n - 1);    // ?
        for (i = 1;i < n - 1;i++) 
            sum += *(*b + i) + *(*(b + m - 1) + i);    // ? 
        cout << sum << endl; 
    }
    return 0;
}        
           
    
