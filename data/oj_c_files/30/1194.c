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

/*??:???
??:1100012822
??:2011.9.28
??:?7???????.cpp*/


int main()
{
    int n , i = 1 , s = 0;
    cin>>n;
    while(i <= n)
    {
        if((i-7) % 10 == 0 || i % 7 == 0 || (i >= 70 && i < 80)) i += 1;
        else
        {
            s += i * i;
            i += 1;
        }
    }
    cout<<s<<endl;

    return 0;
}