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
    int x1, y1, x2, y2, i, j, k;
    cin >> x1 >> y1;
    int a[x1][y1];
    for(i = 0; i < x1; i++)
        for(j = 0; j < y1; j++)
        cin >> a[i][j];
    cin >> x2 >> y2;
    int b[x2][y2], c[x1][y2];
    memset(c, 0, sizeof(c));
    for(i = 0; i < x2; i++)
        for(j = 0; j < y2; j++)
        cin >> b[i][j];
    for(i = 0; i < x1; i++)
        for(k = 0; k < y2; k++)
          for(j = 0; j < y1; j++)
        c[i][k] += a[i][j] * b[j][k];
    for(i = 0; i < x1; i++)
   {
       for(k = 0; k < y2 - 1; k++)
      {
        cout << c[i][k] << " ";
      }
        cout << c[i][y2 - 1] << endl;
   }
    return 0;
}
