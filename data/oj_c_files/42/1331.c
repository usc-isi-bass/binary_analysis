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

//***********************************************
//???:????????                       *
//??????                                  *
//??10?29?                                  *
//***********************************************
int main()
{
    int a[100000] = {0}, n, s, i, j;
    cin >> n; 
    for(i = 0; i < n; i++)
    {
         cin >> a[i];
    }
    cin >> s;
    a[n] = s;
    for(i = 0; i < n; i++)
    {
         if(a[i] == s)
         for(j = i + 1; j < n; j++)
         {
             if(a[j] != s)
             {
                 a[i] = a[j];
                 a[j] = s;
                 break;
             }
         }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] == s)
        break;
        cout << a[i];
        if(a[i + 1]!= s)
        cout << " "; 
    }
    return 0;
    
} 
