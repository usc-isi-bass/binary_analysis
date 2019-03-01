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

//*****************************************
//* ???????? **
//* ?????? 1300012741 **
//* ???2013.9.25 **
//*****************************************


int main()
{
    int i, num; // ???????????
    double origin, better, origin_temp, better_temp; // ??????????????????????
    cin >> num; // ??????
    cin >> origin >> better; // ?????????

    for ( i = 1; i < num; i++ ) // ??????-1?
    {
        cin >> origin_temp >> better_temp; // ????????
        if ( better / origin - better_temp / origin_temp > 0.05 ) // ????
            cout << "worse" << endl;
        else if ( better_temp / origin_temp - better / origin > 0.05 ) //????
            cout << "better" << endl;
        else // ?????
            cout << "same" << endl;
    }

    return 0;
}
