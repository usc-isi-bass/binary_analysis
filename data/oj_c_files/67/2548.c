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
//*??  ?????          *****
//*????? 1300012753     ***** 
//*???2013.09.25          *****   
//********************************
int main()
{
    int i, n, sum, d;   // ??????i???????n??????sum?????d 
    int a, b;            // ??a?b??????????????? 
    float x, y, c;       // ??????????x????y,???????????c 
    cin >> n;
    cin >> a >> b;
    x = 1.0 * b / a;
    for (i = 1; i <= n-1; i++)
    {
        cin >> sum >> d;
        y = 1.0 * d / sum;
        c = y - x;
        if (c >= 0.05)
        {
              printf("better\n");
        }
        else if (c <= -0.05)
        {
              printf("worse\n");
        }
        else
        {
              printf("same\n");
        } 
    }
    return 0;
}
