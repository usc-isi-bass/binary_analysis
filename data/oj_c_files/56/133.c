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


int main(){
	char num[11] , i ;

	for( i = 1 ; num[i - 1] != '\n'; i++ ){
	scanf( "%c" , &num[i] ) ;
	}
	for ( i = 6 ; i <= 10 ; i++){
	num[i] = num[11 - i] ;
	}
	for ( i = 6 ; i <= 10 ; i++){
	printf( "%c" , num[i]) ;
	}
	
	
	return(0);
	
}
 
