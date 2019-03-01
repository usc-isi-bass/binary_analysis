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
    int n , m , i , j , a[100][100] ;
    cin>>n>>m;
    for( i=1 ; i<=n ; i++ )
     for( j=1 ; j<=m ; j++ ) cin>>a[i][j];  
    for( i=2 ; i<=n+m ; i++ )
     for( j=max(1,i-m) ; j<=min(n,i-1) ; j++ ) cout<<a[j][i-j]<<endl;
}
