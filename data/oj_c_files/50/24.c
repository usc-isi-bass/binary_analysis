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


int mon(int m){
    int y ;
    if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) y = 31 ;
    else if( m == 2 ) y = 28 ;
    else y = 30 ;
    return(y);
}

int main(){
    int w , ww , i = 13 , m ;
    scanf("%d" , &w );
    for( m = 1 ; m <= 12 ; m = m + 1 ){
        ww = ( i - 1 + w ) % 7;
        if ( ww == 5 ) printf("%d\n" , m );
        i = i + mon(m);
    }
    return(0);
}