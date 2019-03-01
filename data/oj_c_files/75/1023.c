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
    int time, cnt = 0;
    int delta[1001] = {0};

    while (1)
    {
        cin >> time;
        delta[time]++;
        cnt++;
        if (cin.get() != ',')
            break;
    }

    int i;
    char comma;
    for (i=0; i<cnt; i++)
    {
        cin >> time >> comma;
        delta[time]--;
    }

    int curprecent = 0, max = 0;
    for (i=0; i<1001; ++i)
    {
        curprecent += delta[i];
        if (curprecent > max)
            max = curprecent;
    }

    cout << cnt << ' ' << max << endl;
    return 0;
}
