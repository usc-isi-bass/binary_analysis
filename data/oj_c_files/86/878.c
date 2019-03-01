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

//*************************************************
//* file: 1000012912_006.cpp                      *
//* author : ???                               *
//* date : 2010.11.24                             *
//* function : ????                           *
//*************************************************
int main()
{
	int n, m, i, j, count[20];                             //n????m?????
	cin >> n;
	for ( i = 0; i < n; i ++ )
	{
		cin >> m;
		if ( m == 0 )
			cout << 60 << endl;
		for ( j = 0; j < m; j ++ )
			cin >> count[j];
		for ( j = m - 1; j >= 0; j -- )
		{
			if ( count[j] + 3 * ( j + 1) <= 60 )             //?60s????
			{ 
				cout << 60 - 3 * ( j + 1) << endl;
				break;
			}
			else  
				if ( count[j] + 3 * ( j + 1 )<= 63 )          //?60s???3s?
				{
					cout << count[j] << endl;
					break;
				}
		}
	}
	return 0;
}

