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
    int in[1005], out[1005], num = 0, count[1005] = {0}, max = 0;
    char f;
    while (1)
    {
        cin >> in[num++];
        if (cin.get() == '\n') break;
    }
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &out[i]);
        cin.get();
        for (int j = in[i]; j < out[i]; j++)
            count[j]++;
    }
    for (int i = 0; i < 1001; i++)
        if (max < count[i]) max = count[i];
    cout << num << " " << max << endl;
    return 0;
}