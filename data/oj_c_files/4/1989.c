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
    int row, col, array[100][100], i, j;
    
    cin >> row >> col;
    
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            cin >> array[i][j];

    for(i = 0; i < col; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(j < row) cout << array[j][i - j] << endl;
        }
    }
            
    for(j = 1; j < row; j++)
    {
        for(i = col - 1; i >= 0; i--)
        {
            if(col - 1 + j - i < row)
            {
                cout << array[col - 1 - i + j][i] << endl;
            }
        }
    }

    return 0;
}
