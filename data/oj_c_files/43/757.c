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
//*????1.cpp                ** 
//*?????????           **
//*?????? 1200012834      **
//*???2012.10.22             **
//********************************

int main()
{
    int m, a, b, i, j1=0, j2=0;  // a??????b??????j1?j2?a?b???? 
    cin >> m;
    for(a = 3; a <= m/2; a++)  // a?3???m/2???a<=b 
    {
        b=m-a;   // ??b?? 
        for(i = 1; i <= a; i++)  // ???????a????? 
        {
            if(a % i == 0)
            {
                j1 = j1 + 1;
            }
        }
        for(i = 1; i <= b; i++)  // ???????b????? 
        {
            if(b % i == 0)
            {
                j2 = j2 + 1;
            }
        }
        if(j1 == 2 && j2 == 2)   // ??a?b???2??????a?b???? 
        {
            cout << a << " " << b << endl;  // ??a?b?? 
        }
        j1 = 0;
        j2 = 0;  // ????????????????0 
    }
    return 0;
}
