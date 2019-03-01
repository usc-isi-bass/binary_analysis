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
    char a[100];
    int i=1,j,m,k,x = 0;
    while ((a[i] = cin.get() ) !=  '\n')
    {
        i++;
    }
    m = i - 1;
    for (j = 2; j <= m; j++)       //????????
    {
        for (i = 1; i <= m-j+1; i++)        //??????
        {
            for ( k = 0; k <= j/2-1; k++)      //??
            {
                x = 0;
                if ( a[i+k] != a[i+j-1-k] )
                {
                    x = 1;
                    break;
                }
            }
            if (x == 0)
            {
                for (k = 0; k <= j-1; k++)
                {
                    cout << a[i+k];
                }
                cout << endl;
            }
        }
    }
    return 0;
}
