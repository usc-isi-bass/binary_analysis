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


int main( int argc, char* argv[] ){
	char str[5];
	int i, count;

	scanf( "%s", str );

	count = strlen(str);
	for ( i = count - 1; i >= 0; i-- ){
		printf( "%c", str[i] );
	}
	
	return 0;

}