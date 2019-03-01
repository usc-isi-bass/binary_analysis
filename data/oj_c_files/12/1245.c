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
//*?????         **
//*?????? 1200012839 **
//*???2012.10.30   **
//********************************

int main()
{
    int a[15], value;
    while (cin >> value && value != -1)
    {
        a[0] = value;
        int i = 0, count = 0;
        while (a[i] != 0)
        {
            i++;
            cin >> a[i];
        }
        
        for (int j = 0; j < i; j++)
        {
            
            for (int k = 0; k < i; k++)
            {
                if (a[j] == 2 * a[k])
                {
                    count = count + 1;
                }
            }
        }
        cout << count << endl;        
    }
    
    while (value == -1)
    {
        break;
    }
    return 0;
}