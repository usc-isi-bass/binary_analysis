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



int jichuan(int x , char s[] , int b[] , int l)
{
    int p , q , t , i , j ; 
    for (p = x , q = l - x , t = 0 , i = p ; i <= q ; i ++ )
    {
        if ((b[i]) && (s[i - x] == s[i + x]))
        {
                   for (j = i - x ; j <= i + x ; j ++ )
                       cout << s[j] ; 
                   cout << endl ; 
                   t ++ ; 
        }
        else
                   b[i] = 0 ; 
    }
    return t ; 
}

int ouchuan(int x , char s[] , int a[] , int l)
{
    int p , q , t , i , j ; 
    for (p = x - 1, q = l - x , t = 0 , i = p ; i <= q ; i ++ )
    {
        if ((a[i]) && (s[i - x + 1] == s[i + x]))
        {
                   for (j = i - x + 1; j <= i + x ; j ++ )
                       cout << s[j] ; 
                   cout << endl ; 
                   t ++ ; 
        }
        else
                   a[i] = 0 ; 
    }
    return t ;
}

int main()
{
    int a[501] , b[501] , l , i , m0 , m1 , max ; 
    char s[501] ; 
    cin >> s ; 
    l = strlen(s) - 1 ; 
    for (i = 0 ; i <= l ; i ++ )
    {
        a[i] = 1 ; 
        b[i] = 1 ; 
    }
    for (m0 = 1 , m1 = 1 , max = (l + 1) / 2 , i = 1 ; i <= max ; i ++ )
    {
        if (m0 != 0)
               m0 = ouchuan(i , s , a , l) ; 
        if (m1 != 0)
               m1 = jichuan(i , s , b , l) ; 
        if ((m1 == 0) && (m0 == 0))
           break ; 
    }
    return 0 ; 
}
