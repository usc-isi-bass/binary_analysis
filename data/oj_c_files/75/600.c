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
//*????????             **
//*?????? 1300012773      **
//*???2013.10.30             **
//********************************
int x[1000], y[1000], t[1000];
int main()
{

    int num, h = 1, max = 1;
    char ch;
    int T = 0;

    for(num = 0;;)
    {
        cin >> x[num];
        t[x[num]]++;
        ch = cin.get();
        if(ch != ',')break;
        num ++;
        
    }

    cout << num + 1;

    for(int i = 0; i <= num; i++)
    {
        cin >> y[i];
        t[y[i]]--;
        ch = cin.get();
    }
    for(int i = 0; i < 1000; i++)
    {
        T += t[i];
        if(T > max)max = T;
    }
    
    cout << ' ' << max;
    return 0;
}
