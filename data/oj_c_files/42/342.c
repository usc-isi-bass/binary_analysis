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
    int n, k, i, m, t;
    int a[100001];
    cin >> n ;
    for( i = 1; i <= n ; i++)
    {
          cin >> a[i] ; 
    }
    cin >> k; 
    t = 0; 
    for( i = 1; i <= n; i++)
    {
         if (a[i] == k)
         t = t + 1;
         else
         a[i-t]=a[i];
    }
    cout << a[1];
    for( i = 2; i <= n - t; i++)
    {
         cout << " " << a[i] ;
    }  
    cin >> n;
    return 0;
}
                
                
     
