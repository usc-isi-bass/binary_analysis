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

//********************************
//*?????????   **
//*????? 1300012707 **
//*???2013.10.23  **
//*******************************
int main()
{
	int m, s1, s2;
	cin >> m;
	for ( int i = 3; i <= m / 2; i = i + 2)
    {
		s1 = 0;
		s2 = 1;
		for ( int j = 2; j <= sqrt(i); j = j + 1)
		{
			if ( i % j == 0)
            {
				s1 = 1;
				break;
			}
		}
		if ( s1 == 0)
        {
			s2 = 0;
			for ( int j = 2; j <= sqrt( m - i); j = j + 1)
			{
			    if ( ( m - i) % j == 0)
				{
				    s2 = 1;
				    break;
				}
			}
        }
		if ( s2 == 0)
        {
			cout << i << " " << m - i << endl;
        }
    }
	return 0;
}