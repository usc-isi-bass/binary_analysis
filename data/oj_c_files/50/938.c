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
    int f[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,j,day;
    cin>>day;
    day--;
    for( i=1 ; i<=12 ; i++ )
     for( j=1 ; j<=f[i] ; j++ )
     {
       day++;
       if(day>7)day=1;
       if(j==13&&day==5)cout<<i<<endl;
     }
}
