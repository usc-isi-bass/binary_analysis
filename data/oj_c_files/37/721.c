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

//***********************************
//*???????????????? *
//*?  ????  1100062709         *
//*?  ??2011.11.5                *
//***********************************
int main()
{
    int t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        int j, k, flag = 0, repeat = 0;
        char str[100001];
        cin >> str;
        int length = strlen(str);
        for (j = 0; j < length; j++)
        {
            for (k = 0; k < length; k++)
            {
                if (j == k)
                   continue;
                else if (str[j] == str[k])
                {                     
                     repeat = 1;                   
                     break;
                }
            }
            if (!repeat)
            {
               cout << str[j] << endl;
               flag = 1;
               break;
            }
            repeat = 0;
        }
        if (!flag)
           cout << "no" << endl;
    }
    return 0;
}
