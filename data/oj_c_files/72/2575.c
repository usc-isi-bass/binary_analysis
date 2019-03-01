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
    int height[30][30] = {0};
    int i, j, k, row, col;
    cin >> row >> col;
    for (i = 1; i <= row; i++)
     for (j = 1; j <= col; j++)
     {
         cin >> height[i][j];
     }
    int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    for (i = 1; i <= row; i++)
     for (j = 1; j <= col; j++)
     {
          for (k = 0; k < 4; k++)
          {
               int ii = i + dir[k][0];
               int jj = j + dir[k][1];
               if (height[i][j] < height[ii][jj])
               {
                   break;
               }
          }
          if (k == 4)
          {
              cout << i - 1 << " " << j - 1 << endl;
          }
     } 
     return 0;
}
