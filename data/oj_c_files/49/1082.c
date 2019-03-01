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


int isgoodsubstr( char * s, int l, int r )
{
	if ( l > r )
		return -1;//wrong!
	int i = l, j = r;
	for ( ; i < j; i++, j-- )
		if ( s[i] != s[j] )
			return 0;
	return 1;
}

int main()
{
	char s[501];
	gets(s);
	int i = 0, j = 0, l = strlen(s);
	int k = 0;
	for ( i = 2; i <= l; i++ )
	{
		for ( j = 0; j+i-1 < l; j++ )
		{
			if ( isgoodsubstr( s, j, j+i-1 ) == 1 )
			{
				for ( k = j; k <= j+i-1; k++ )
					putchar(s[k]);
				putchar('\n');
			}
		}
	}
	return 0;
}