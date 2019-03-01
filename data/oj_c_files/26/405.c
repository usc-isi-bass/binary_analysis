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
    char c[100];
    cin.getline(c,100);
    int n = strlen(c);
    int i = 0;
    do
    {
        if ( c[i] != ' ' )
        {
                cout << c[i] ;
                //cout << i << endl ;
                i++ ;
        }
        else
        {
            cout << c[i] ;
            do 
            {
                 i = i + 1 ;
            }while ( c[i] == ' ') ;
        }
    }while ( i <= n - 1) ;
    cout << endl ;
    return 0 ;
} 