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

//???????

int main()
{
	int i;
	char str[ 31 ];
	char *p;
	cin.getline( str , 31 );
	p = str;
	for( ; *p != '\0' ; p++ )
	{
		if ( *p >= '0' && *p <= '9' )
		{
			for ( i = 0 ; *( p + i ) != '\0' ; i++ )
			{
				if ( *( p + i ) < '0' || *( p + i ) > '9' )
				{
					p = p + i;
					cout << endl;
					break;
				}
				cout << *( p + i );
				if ( *( p + i + 1 ) == '\0' )
				{
                    p = p + i;
					cout << endl;
					break;
				}
			}
		}
	}
	return 0;
}

