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
int k,a[30] ;
cin >> k;
for ( int i = 1 ; i <= k ; i ++ )
cin >> a[i] ;
int sum[30] ;
for ( int i = 0 ; i <= k ; i ++ )
sum[i] = 1 ;
for ( int i = 2 ; i <= k ; i ++ )
{
for ( int j = i - 1 ; j > 0 ; j -- )
{
if ( a[j] >= a[i] && sum[i] < sum[j] + 1)
sum[i] = sum[j] +1 ;
}
}
int max = 1 ;
for ( int i = 1 ; i <= k; i ++ ){
if ( max < sum[i] )
max = sum[i] ;
}
cout << max << endl ;
return 0 ;
}
