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
    int a[100][100], p, q, row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    p = 0;
    q = 0;
    for (int i = 0; i < row * col; i++)
    {
        cout << a[p][q] << endl;
        if (q == 0 || p == row - 1)
        {
            q = p + q + 1;
            p = 0;
            while (q >= col)
            {
                p++;
                q--;
            }
        }
        else
        {
            p++;
            q--;
        }
    }
    return 0;
}
