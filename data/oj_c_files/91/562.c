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
//	?????	??????s??????s1
//	?????	?  ? ? ? ?? 1000012733 ?
//	?????	2010 ? 12 ? 18 ?
//
int main()
{
	char s[101], s1[101];
	int i, len;
	cin.getline ( s, 101 );
    len = strlen ( s );
	memset ( s1, 0, 101 );
	for ( i = 0; i < len; i++ )
	{
		if ( i < len - 1 )
			s1[i] = s[i] + s[i + 1];
		else
			s1[i] = s[i] + s[0];
	}
	cout << s1 << endl;
	return 0;
}