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
    int m = 0;
    scanf("%d", &m);
    int Set[5001];
    int SetN = 1;
    Set[0] = 0;
    Set[1] = 2;
    int i = 0, j = 0;
    for ( i = 2; i <= m; i++ )
    {
        for ( j = 1; j <= SetN; j++ )
        {
            if ( i % Set[j] == 0 )
                break;
        }
        if ( j == SetN + 1 )
        {
            SetN++;
            Set[SetN] = i;
        }
    }
        /*for ( j = 1; j <= SetN; j++ )
        {
            printf("%d\n", Set[j]);
        }*/
    for ( i = 1; i <= SetN; i++ )
    {
        if (Set[i]>m/2)
            break;
        for ( j = i; j <= SetN && Set[i]+Set[j] <= m; j++ )
        {
            if ( Set[i]+Set[j] == m )
            {
                printf("%d %d\n", Set[i], Set[j]);
            }
        }
    }
    return 0;
}
