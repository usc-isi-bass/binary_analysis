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

//???2010?12?8?

//???1000010586_???

//??????????

int main()
{
	int i = 0 ;                         
	char word[ 100 ] , str[ 100 ];
	char *p , *q;
	cin.getline( word , 100 );
	p = word;
	for ( ; *p != '\0' ; p++ )
	{
		if ( *p == ' ' && *( p - 1 ) == ' ' )
			continue;
		str[ i ] = *p;
		i++;
	}
	str[ i ] = '\0';
	q = str;
	cout << q << endl;
	return 0;
}