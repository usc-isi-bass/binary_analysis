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
	int num , len = 0 , i = 0;
	char *p = NULL;
	char a[ 10000 ];
	cin.getline( a , 10000 );
	len = strlen( a );
	p = &a[ len - 1 ];
	for( i = 0 ; i <= len - 1 ; i++ )
		cout << *( p - i );
	return 0;
}