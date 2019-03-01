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


int main()
{
    const int max_size = 1000;
    int l[max_size], r[max_size];
    for (int i = 0; i < max_size; ++i)
    {
        l[i] = 0;
        r[i] = 0;
    }
    int x, att; char ch;
    
    att = 1;
    cin >> x; ch = cin.get();
    ++ l[x];
    while (ch == ',')
    {
       cin >> x; ch = cin. get();
       ++ l[x];
       ++att;   
    }
    cout << att << " ";
    cin >> x; ch = cin.get();
    ++ r[x];
    while (ch == ',')
    {
       cin >> x; ch = cin.get();
       ++ r[x];   
    }
    
    int ans, num;
    ans = 0; num = 0;
    for (int i = 0; i < max_size; ++i)
    {
        num = num + l[i] - r[i];
        if (num > ans)
        {
                ans = num;
        }
    }
    cout << ans;
    return 0; 
}