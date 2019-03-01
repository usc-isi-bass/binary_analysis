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

int main ()
{
	int i = 0, j, l;
	char str[150] = {0};
	gets ( str );
	l = strlen( str );
	while ( str[i] != '\n' )
	{
		while ( str[i] != ' ' )
		{	
			if ( str[i] == '\0' )
			{
				cout << endl;
				return 0;
			}
			cout << str[i];
			i++ ;
		}
		cout << " " ;
		while ( str[i] == ' ' )
		{
			if ( str[i] == '\n' )
			{
				cout << endl;
				return 0;
			}
			i++;
		}
	}
	return 0;
}