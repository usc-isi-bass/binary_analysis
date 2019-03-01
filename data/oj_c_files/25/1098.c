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

int result[100];
int main()
{
    int n;
    cin >> n;
    int i, j, size = 1, c = 0;
    memset(result, 0 ,sizeof(result));
    result[0] = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < size; j++)
        {
            result[j] = result[j] * 2 + c ;
            c = result[j]/10;
            if (result[j] >= 10)
            {
                result[j] = result[j] % 10;
                if (j == size - 1)
                {
                    size++;
                }
            }
        }
    }
    for(j = size - 1; j >= 0; j--)
    {
        cout << result[j];
    }
    return 0;
}