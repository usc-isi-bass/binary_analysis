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
	char line[1000] ;
	char outline[1000] ;
	int i , j ;
	int len ;
	while ( cin >> line )
	{
		strcpy(outline , line) ;
		len = strlen(line) ;
		for ( i = 0 ; i < len ; i++ )
		{
			if ( line[i] == ')' ) 
			{
				for ( j = i - 1 ; j >= 0 ; j-- )
				{
					if ( line[j] == '(' )
					{
						line[j] = ' ' ;
						line[i] = ' ' ;
						break ;
					}
				}
			}
		}
		cout << outline << endl ;
		for ( i = 0 ; i < len ; i++ )
		{
			if ( line[i] == '(' )
			{
				cout << '$' ;
			}
			else
			{
				if ( line[i] == ')' )
				{
					cout << '?' ;
				}
				else
					cout << ' ' ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}
