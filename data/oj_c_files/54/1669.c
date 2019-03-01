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

/**
 *@file 1.cpp
 *@author ???
 *@date 2013-12-03
 *@description ?????
 */

int n, k,ans=0, i=0;

int fen(int x)
{
    
    
        if(x==1)
          return 1;
        
        else
        {
            if(ans%(n-1)==0)
            {
                ans=ans/(n-1)*n+k;
                return fen(x-1);
            }
            else  return 0;
        
        }

}


int main()
{
    cin >> n >> k;
    while(1)
    {
        ans=i*n+k;
        if(fen(n))
        {cout << ans << endl;break;}
        i++;
    }
    return 0;
}
