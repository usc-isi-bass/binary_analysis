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
    int n;
    cin >> n;
    char str[102];
    str[1] = '1';
    for (int i = 2; i < 102; i++)
        str[i] = '0';
    int num[102];
    for (int i = 1; i < 102; i++)
        num[i] = str[i] - '0';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 101; j++)
            num[j] *= 2;
        for (int j = 1; j <= 101; j++)
            if (num[j] >= 10)
            {
                 num[j] = num[j] - 10;
                 num[j + 1]++;
            }
    }
    int j = 101;
    while (num[j] == 0)
    {
          j--;
    }
    for (; j >= 1; j--)
        cout << num[j];
    cout << endl;
    return 0;
}
