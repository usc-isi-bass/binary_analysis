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

//****************************************
//*??????                         **
//*?????? 1100012798              **
//*???2011.10.15                     **
//****************************************
int main()
{
    int a,b,c,ai,bi,ci;                            // ??a,b,c,ai,bi,ci???
    char k[3];                                     // ??k[3]?????
    for (a = 0;a < 3;a++)                          // ????,???a,b,c?????
    {
        for (b = 0;b < 3;b++)
        {
            for (c = 0;c < 3;c++)
            {
                ai = 0;
                bi = 0;
                ci = 0;                            // ??????
                if (b > a)
                    ai++;
                if (c == a)
                    ai++;
                if (b < a)
                    bi++;
                if (c < a)
                    bi++;
                if (c > b)
                    ci++;
                if (b > a)
                    ci++;                          // ????????????
                if ((a + ai == 2) && (b + bi == 2) && (c + ci == 2))
                {
                    k[a] = 'A';
                    k[b] = 'B';
                    k[c] = 'C';
                    cout<<k[0]<<k[1]<<k[2]<<endl;  // ?????????A,B,C
                }
            }
        }
    }
    return 0;
}