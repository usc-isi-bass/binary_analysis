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
    int num[100] = {0};
    num[0] = 1;
    int x;
    int i, j;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < 100; j++)
            num[j] = 2 * num[j];
        for (j = 0; j < 100; j++)
            if (num[j] > 9)
            {
                num[j] = num[j] - 10;
                num[j + 1]++;
            }
    }
    i = 99;
    while (num[i] == 0)
        i--;
    for (; i >= 0; i--)
        cout << num[i];
    cout << endl;
    return 0;
}
