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
    char s[505];
    int i, j, l;
    cin >> s;
    l = strlen(s);
    for (i = 2; i <= l; i++)
        for (j = 0; j <= l - i; j++)
        {
            int t = i / 2;
            int k;
            for (k = 0; k < t; k++)
            {
                if (s[j + k] != s[j + i - k - 1]) break;
            }
            if (k >= t)
            {
                for (int m = j; m < j + i; m++)
                {
                    cout << s[m];
                }
                cout << endl;
            } 
        }
        
   
    return 0;
}
