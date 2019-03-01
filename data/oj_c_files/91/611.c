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

/**
 * ??????·
 * ???1000012844
 * ??????????
 **/


int main()
{
	char s1[ 101 ], s[ 101 ];
	cin.getline( s, 101 );
	char *ptr1 = NULL, *ptr2 = NULL, *targetPtr = NULL;
	ptr1 = s;
	ptr2 = s + 1;
	targetPtr = s1;
	int lenth = strlen( s );

	while ( ptr2 != s + lenth )
	{
		*targetPtr++ = *( ptr1++ ) + *( ptr2++ );
	}
	*targetPtr++ = *s + *ptr1;
	*targetPtr = 0;
	cout << s1;
}