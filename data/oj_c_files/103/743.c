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
    char str[1001];
    cin >> str;
    int length = strlen(str);
    int count = 1;
    for (int i = 1; i < length; i++)
    {
        if (str[i] == str[i - 1] 
            || str[i] - 'a' == str[i - 1] - 'A' 
            || str[i] - 'A' == str[i - 1] - 'a')
            count++;
        else
        {
            if (str[i - 1] - 'A' >= 0 && str[i - 1] - 'A' < 26)
                cout << "(" << (char)str[i - 1];
            else 
                cout << "(" << (char)(str[i - 1] - 'a' + 'A');
            cout << "," << count << ")";
            count = 1;
        }
    } 
    if (str[length - 1] - 'A' >= 0 && str[length - 1] - 'A' < 26)
        cout << "(" << (char)str[length - 1];
    else 
        cout << "(" << (char)(str[length - 1] - 'a' + 'A');
    cout << "," << count << ")";
    return 0;
}
