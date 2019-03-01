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
    int a,is1[4000],is2[4000],s,n;
    int k = 0;
    cin >> n;
   for (int i = 0; i < n * n;i++)
    {
            cin >> a;
             if (a == 0)
             {
                         
                         is1[k] = i / n;
                         is2[k++] = i % n;
         }
    }
    cout << (is1[k - 1] - is1[0]-1)*(is2[k - 1] - is2[0]-1);
    return 0;
}