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
//*?????????  **
//*????? 1300012739 **
//*???2013.10.23  **
//********************************

int main()
{
    int n, m, i, j;
    double k;
    
    cin >> n;
    
    for(i = 3; i <= n / 2; i = i + 2)   //?i??????n/2????? 
    {
        int r = 0;                      //??r = 0??r?0????????????? 
        
        k = sqrt(i);
        
        for(j = 2; j <= k; j++)        //??i????? 
        {
            if(i % j == 0) r++;
        }
        
        if(r) continue;                //?????????????????n - i? 
        else
        {
            r = 0;
            
            k = sqrt(n - i);
            
            for(j = 2; j <= sqrt(n - i); j++)        //???n - i?????? 
            {
                if((n - i) % j == 0) r++;
            }
        }
            
        if(r) continue;                             //????????????????i???n- i? 
        else
        {
            cout << i << " " << n - i << endl;
        }
    }

    return 0;
}
