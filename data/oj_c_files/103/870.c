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
    char a[1001];
    int l,i,sum=1;
    gets(a);
    l = strlen(a);
    for ( i = 0 ; i < l ; i ++ )
    {
        if ( a[i] >= 'a' && a[i] <= 'z' )
        a[i] -= 32;
    }
    for ( i = 0 ; i < l ; i ++ )
    {
        if ( a[i] == a[i+1] )
        {
             sum++;
             }
        else
        {
            cout<<"("<<a[i]<<","<<sum<<")";
            sum=1;
        }
        }
}
        
