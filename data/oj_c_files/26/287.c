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

//
//	?????	???????
//	?????	???????????????????????????????????
//	?????	?  ? ? ? ?? 1000012733 ?
//	?????	2010 ? 12 ? 10 ?
//
int main()
{
	char str[101];
	char *p;
	int i;
	cin.getline ( str, 101 );
	p = str;
	for ( i = 0; i < 101; i++ )
	{
		if (( *( p + i ) != '\0' ) && ( *( p + i ) != ' ' ))
			cout << *( p + i );
		if (( *( p + i ) == ' ' ) && ( *( p + i - 1 ) != ' ' ))
			cout << *( p + i );
		if ( *( p + i ) == '\0' )
			break;
	}
	return 0;
}