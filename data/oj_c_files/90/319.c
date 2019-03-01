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

// ?????? ???1000010500 
// ????? 
// 2010-12-3


int ways(int,int);

int main()
{
    int t,M,N,i,k[100];
    cin >> t;                           // ???????? 
    for (i = 0;i < t;i ++)
    {
        cin >> M >> N;                  // M?????N??? 
        k[i] = ways(M,N);               // ?k??????
    }
    for (i = 0;i < t;i ++)
         cout << k[i] << endl;
    return 0;
}

int ways(int m,int n)
{
    int k;
    if (n == 1 || m == 0 || m == 1)                         // ??????????????????? 
       return 1;
    if (m >= n)                                   // ?m=n???0?n?????? 
          k = ways(m,n - 1) + ways(m - n,n);
    else
          k = ways(m,n - 1);
    return k;
}
    
            
             
        
    
    
