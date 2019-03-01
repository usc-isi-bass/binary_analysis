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
    int n, count[30] = {0}, num[30][1000] = {0};
    cin >> n;
    while (n--)
    {
        int no;
        char c;
        cin >> no;
        cin.get();
        while ((c = cin.get()) != '\n')
        {
            num[c - 'A'][count[c - 'A']++] = no;
        }
    }
    int max =count[0], set = 0;
    for (int i = 1; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            set = i;
        }
    }
    cout << (char) (set + 'A') << endl << max << endl;
    for (int i = 0; i < max; i++)
    {
        cout << num[set][i] << endl;
    }
 
    return 0;
}