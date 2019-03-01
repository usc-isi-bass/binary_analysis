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
	char *p = NULL ;
	char str[100] ;
	cin.getline(str,100) ;
	p = str ;
	int len = strlen(str) ;
	for ( p = str ; p < str + len ; p++ )
	{
		if ( (int)*p >= 48 && (int)*p <= 57 )
		{
			if ( ((int)*(p - 1) < 48 || (int)*(p - 1) > 57) && p != str )
			{
				cout << endl ;
			}
			cout << *p ;
		}
	}
	cout << endl ;
	return 0 ;
}