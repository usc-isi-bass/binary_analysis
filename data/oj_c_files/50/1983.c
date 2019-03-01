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
//*????????            **
//*?????? 1200012839    **
//*???2012.11.12          **
//********************************

int main()                           //???
{
    int jun1, month[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
    cin >> jun1;
    for (int i = 1; i <= 12; i++)
    {
        if (((month[i] + 12) % 7 + jun1) % 7 == 5)
            cout << i << endl;
    }
    
    return 0;
}