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
    int n, i, j = 0, t = 0, x1, x2;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> x1 >> x2;
        
        if(x1 >= 90 && x1 <= 140 && x2 >= 60 && x2 <= 90) j++;
        else if(j == 0) continue;
        else if(j != 0)
        {
            t = t >=j ? t: j;
            j = 0;
        }
    }
    
    t = t >= j ? t : j;
    
    cout << t << endl;

    return 0;
}
