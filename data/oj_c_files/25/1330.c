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

//*****************************
//* ??????2?N??     ** 
//* ?????? 1300012948  ** 
//* ???2013.11.15         ** 
//*****************************
int main()
{
    int a[32] = {0}, n, p;
    cin >> n;
    a[0] = 1;
    for(int i = 1; i <= n; i++)
    {
            for(int j = 0; j < 32; j++) // ???????????? 
            {
                    a[j] = a[j] * 2;
            }
            for(int k = 0; k < 32; k++) // ????????????,??????,?????,???????? 
            {
                    if(a[k] >= 10)
                    {
                            a[k] -= 10;
                            a[k + 1]++;
                    }
            }
    }
    p = 31;
    while(a[p] == 0) // ????????? 
    {
               p--;
    }
    for( ; p >= 0; p--) // ???????? 
    {
         cout << a[p];
    }
    cout << endl;
    return 0;
}