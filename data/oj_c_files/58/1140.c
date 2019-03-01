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


char na[100];

int main ( )
{
	int num;
	cin >> num;
	cin.getline ( na, 100 );
	while ( num -- )
	{
		memset ( na, ' ', sizeof ( na ) );
		cin.getline ( na, 100 );
		int index = 0, len = 0;
		len = strlen ( na );
		if ( !( na[index] == '_' || ( na[index] <= 'z' && na[index] >= 'a' ) || ( na[index] <= 'Z' && na[index] >= 'A' ) ) )
		{
			cout << 0 << endl;
			continue;
		}
		index ++;
		for (  ; index < len; index ++ )
		{
			if ( na[index] == '_' || (na[index] >= '0' && na[index] <= '9' ) || ( na[index] <= 'z' && na[index] >= 'a' ) || ( na[index] <= 'Z' && na[index] >= 'A' ) )
				continue;
			else
			{
				cout << 0 << endl;
				break;
			}
		}
		if ( index == len )
			cout << 1 << endl;
	}
	return 0;
}

