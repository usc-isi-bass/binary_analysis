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
    int n, num[10000];
    int i = 0, t = 0;
    cin >> n;
    num[0] = n % 10 ;
    
    while(n / 10 != 0)
    {       t = t + 1;
            num[t] =( n / 10 ) % 10 ;
            n = n / 10;   
    }
    
    for (i;i <= t; i++)
    {
        cout << num[i];
    
    }
    
    return 0 ;

}