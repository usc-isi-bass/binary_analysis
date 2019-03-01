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
    int a[100][100], b[100][100], row, col, p, q, dir;
    cin >> row >> col;
    for (int i = 0; i < 100; i++)
    {
        for (int i1 = 0; i1 < 100; i1++)
        {
            b[i][i1] = 1;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int i1 = 0; i1 < col; i1++)
        {
            cin >> a[i][i1];
            b[i][i1] = 0;
        }
    }
    p = 0;
    q = 0;
    dir = 1;
    for (int i = 0; i < row * col; i++)
    {
        cout << a[p][q] << endl;
        b[p][q] = 1;
            switch(dir)
            {
                case 1:
                if (b[p][q+1] == 0) q++;
                else
                {
                    p++;
                    dir = 2;
                }
                break;
                case 2:
                if (b[p+1][q] == 0) p++;
                else
                {
                    q--;
                    dir = 3;
                }
                break;
                case 3:
                if (b[p][q-1] == 0) q--;
                else
                {
                    p--;
                    dir = 4;
                }
                break;
                case 4:
                if (b[p-1][q] == 0) p--;
                else
                {
                    q++;
                    dir = 1;
                }
                break;
            }
    }

    return 0;
}