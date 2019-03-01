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
    int meet[100000];
    int i, j, n, a, b;

    scanf( "%d", &n );
    memset( meet, 0, n * sizeof(int) );
    for( scanf("%d%d",&a,&b); a + b; scanf("%d%d",&a,&b) )
        meet[b]++;

    for( i = 0; i < n; i++ )
        if( meet[i] == n -1 )
            break;

    if( i == n )
        printf( "NOT FOUND" );
    else printf( "%d\n", i );

    return 0;
}
