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

//************************************************************
//* ???????                                           *
//* ???????2?15???????????????????*
//*        ?????????????????????????*
//* ?    ?????                                         *
//* ?    ??2013.10.30                                     *
//************************************************************
int main()
{
	int num[16] , i , k , j , count;
	for(;;)                                             //????
	{
		i = -1 ;                                        //?????i?count
	    count = 0 ;
    	do
    	{
	    	i ++ ;
    		cin >> num[i] ;                             //???i+1??
    		if ( num[0] == -1 )                         //?????????-1???
	    		return 0 ;
	    }
    	while ( num[i] != 0 ) ;                         //????0??
    	for ( j = 0 ; j <= i-1 ; j++ )
    	{
    		for ( k = j ; k <= i-1 ; k ++ )
    		{
    			if ( ( num[j] == 2 * num[k] ) ||  ( num[j] * 2 == num[k] ) )              //????
    				count ++ ;                          //??
    		}
    	}
		cout << count << endl ;                         //??
	}
}