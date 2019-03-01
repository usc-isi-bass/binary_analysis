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
//*????4.cpp                ** 
//*??????                 **
//*?????? 1200012834      **
//*???2012.10.22             **
//********************************

int main()
{
    int n, year, m1, m2, d1 = 0, d2 = 0, i;  
                                     // d1?d2????m1??m2???????
    int a[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                                     // ??a????12????? 
    int b[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                                     // ??b????12????? 
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        cin >> year >> m1 >> m2;
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)  // ????? 
        {
            for (i = 0; i < m1 - 1; i++)
            {
                d1 += a[i];  // ???a?m1?????????d1? 
            }
            for (i = 0; i < m2 - 1; i++)
            {
                d2 += a[i];  // ???a?m2?????????d2? 
            }
        }
        else    // ????? 
        { 
            for ( i = 0; i < m1 - 1; i++)
            {
                d1 += b[i];  // ???b?m1?????????d1? 
            }
            for(i = 0; i < m2-1; i++)
            {
                d2 += b[i];  // ???b?m2?????????d2? 
            }
        }
        if ((d1 - d2) % 7 == 0)   // ????????? 
        {
            cout << "YES" << endl;  // ??YES 
        }
        else
        {
            cout << "NO" << endl;   // ????NO 
        }
	    d1 = 0;
	    d2 = 0;  // ??????????????0 
    }
    return 0;
}
