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
    int f[26] , maxnum=1 , i , j , h[26] , n ;
    cin>>n;
    for( i=1 ; i<=n ; i++ ) { cin>>h[i] ; f[i]=1; }
    for( i=2 ; i<=n ; i++ )
    {
       for( j=1 ; j<i ; j++ ) if( h[j]>=h[i] ) f[i]=max( f[i] , f[j]+1 );
       maxnum=max( maxnum , f[i] );
    }
    cout<<maxnum;
}
