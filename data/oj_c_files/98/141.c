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


int	main()
{
	int	n;
	int	count;
	cin >> n;
	for( int i = 1 ; i <= n ; i ++ )
	{
		char	s[41];
		cin >> s;
		if( i == 1 )
		{
			cout << s;
			count = strlen( s );
		}
		else
		{
			if( count + strlen( s ) + 1 <= 80 )
			{
				cout << ' ' << s;
				count += strlen( s ) + 1;
			}
			else
			{
				cout << endl << s;
				count = strlen( s );
			}
		}
	}

	return 0;
}
