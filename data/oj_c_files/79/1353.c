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
        int m = 0, n = 0, i = 0, pre = 0;
        int numberOut = 0, in[300], count = 0;
        scanf("%d%d", &n, &m);
        while (!(m == 0 && n == 0))
        {
               for (i = 0; i < n; i++)
               {
                       in[i] = 1;
               }
               i = 0;
               while (numberOut < n - 1)
               {
                       while (count < m)
                       {
                               if (in[i] == 1)
                               {
                                      count++;
                               }
                               pre = i;
                               i = (i + 1) % n;
                       }
                       in[pre] = 0;
                       numberOut++;
                       count = 0;
               }
               for (i = 0; i < n; i++)
               {
                       if (in[i] == 1)
                               printf("%d\n", i + 1);
               }
               numberOut = 0;
               scanf("%d%d", &n, &m);
        }
        return 0;
}