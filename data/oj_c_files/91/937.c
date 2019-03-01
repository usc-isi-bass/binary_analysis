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

//********************************
//*??????????   **
//*?????? 1200012988 **
//*???2012.12.04  **
//********************************


int main()
{
    char str1[101], str2[101];
    int len, i;
    cin.getline(str1, 101);
    len = strlen(str1);
    for(i = 0; i < len - 1; i++)
        *(str2 + i) = *(str1 + i) + *(str1 + i + 1);
    *(str2 + len - 1) = *str1 + *(str1 + len - 1);
    for(i = 0; i < len; i++)
        cout << str2[i];
    cout <<endl;

    return 0;
}

