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
    int n, s[200001] = {0}, k[100] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        k[s[i]]++;
    }
    int flag[100] = {0};
    for (int i = 0; i < n; i++)
    {
        if (k[s[i]] == 1 && flag[s[i]] == 0)
        {
            if (i == 0)
                cout << s[i];
            if (i != 0)
                cout << " " << s[i];
        }
        if (k[s[i]] != 1 && flag[s[i]] == 0)
        {
            if (i == 0)
                cout << s[i];
            if (i != 0)
                cout << " " << s[i];
            flag[s[i]] = 1;
        }
    }
    return 0;
}
