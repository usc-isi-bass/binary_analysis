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
//*???????   **
//*????? 1200012917 **
//*???2012.10.12  **
//********************************
int main()
{
    int i, n, x, y, b = 0, t = 0;    //???????n????x????y??????b??t?????i?????
    cin >> n;                        //??n
    for(i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if(((x - 90) >= 0) && ((x - 140) <= 0) && ((y - 60) >= 0) && ((y - 90) <= 0))  //??????
        {
             t = t + 1;   //????t?1????????????

        }
        else
        {
                t = 0;  //?????t??
        }
         if(b <=t)
             b = t;     //b?????????
    }
    cout << b << endl;   //??b
    return 0;
}
