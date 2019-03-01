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
    int a[20000], i, j, n, r = 0, s = 0;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for(i = n - 1; i > 0; i--)
    for(j = i - 1; j >= 0; j--)
    {
        if(a[i] == a[j])
        {
            a[i] = -1;
            r++;
        }
    } 
    for(i = 0; i < n; i++)
    {
        if(a[i] != -1)
        {
            if(s != n - r - 1)
            {
                cout << a[i] << " ";
                s++;
            }
            else cout << a[i] << endl;
        }
    }

    return 0;
}
